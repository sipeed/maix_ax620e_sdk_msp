#!/bin/sh
cur_path=$(cd "$(dirname $0)";pwd)

process=frttestlp

pid=$(pidof ${process})
if [ $pid ]; then
  echo "${process} is already running, please check the process(pid: $pid) first."
  exit 1;
fi

pid=$(pidof ${process}_s)
if [ $pid ]; then
  echo "${process}_s is already running, please check the process(pid: $pid) first."
  exit 1;
fi

if [ -e /var/log/core* ]; then
  echo "exist coredump file under path: /var/log, please deal with coredump file first."
  exit 1;
fi

if [ $# -lt 2 ] ; then
  echo "USAGE: $0 -p <ppl> -s <sensor type> [-n <scenario>] [-l <log level>] [-t <log target>]"
  echo " e.g.: $0 -p 0 -s 0                  -- Start with IPC and dual os04a10"
  echo " e.g.: $0 -p 0 -s 0 -n 1             -- Start with IPC and single os04a10"
  echo " e.g.: $0 -p 1 -s 0 -n 0 -l 2 -t 2   -- Start with Pano and os04a10, log level set to ERROR, log target set to APP"
  echo " ---------------------------------------------------------------------------------------------------------------------------"
  echo " Command details:"
  echo "   p: pipeline index, indicates ppl load type, like IPC or Pano etc."
  echo "      0: low power pipeline (DEFAULT)"
  echo "   s: sensor type."
  echo "      0: OS04A10 (DEFAULT)"
  echo "   n: scenario, indicates the scenario to load, which is always defined in config files."
  echo "      0: HuaShan"
  echo "      1: YingShi"
  echo "   l: log level, indicates the log level."
  echo "      ALERT = 1, CRITICAL = 2, ERROR = 3 (DEFAULT), WARN = 4, NOTICE = 5, INFO = 6, DEBUG = 7, DATA = 8"
  echo "   t: log target, indicates the log output targets."
  echo "      SYSLOG = 1, APPLOG = 2, STDOUT = 4 (DEFAULT) (Calculate the sum if multiple targets is required)"
  echo "   c: config path, indicates configure files top path."
  echo "      ./config (Default)"

  echo "   x: aiisp enable."
  echo "      0:t-isp, 1: ai-isp"
  echo "   f: sensor fps."
  echo "      sensor fps list: [5, 15, 20, 25]"
  echo "   v: venc enable."
  echo "      0: disable venc  1: enable venc"
  echo "   j: jenc enable."
  echo "      0: disable jenc  1: enable jenc"
  echo "   z: detect enable."
  echo "      0: disable detect  1: enable detect"
  echo "   y: detect fps."
  echo "      detect fps list: [1, 5]"
  echo "   e: jenc fps."
  echo "      jenc fps list: [1, 5]"
  exit 1;
fi

#set -e
cd $cur_path

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$cur_path/lib

# Enable core dump
EnableCoreDump=1
# Run in background
RunInBackground=0

# Check whether start with gdb debug mode
if [[ $(expr match "$*" ".*-d.*") != 0 ]]
then
  debug="gdb --args"
else
  debug=""
fi

AiIspEnable=1
SnsFps=25
DetectFps=5
JencFps=5
ConfigPath=./config
echo "**********"

while getopts ":p:s:n:f:v:d:l:c:j:x:y:z:e:m:" opt
do
  case $opt in
    x)
      AiIspEnable=$(echo $OPTARG)
      echo "AiIspEnable is $AiIspEnable --";;
    y)
      DetectFps=$(echo $OPTARG)
      echo "DetectFps is $DetectFps --";;
    e)
      JencFps=$(echo $OPTARG)
      echo "JencFps is $JencFps --";;
    f)
      SnsFps=$(echo $OPTARG)
      echo "SnsFps is $SnsFps --";;
    c)
      ConfigPath=$(echo $OPTARG)
      echo "ConfigPath is $ConfigPath --";;
    ?)
      echo "OPTION: $OPTARG";;

  esac
done

echo "SnsFps is $SnsFps --"

# -x   0：t-isp,1： ai-isp
# sed -i 's/\"enable_aiisp\": .*/\"enable_aiisp\": $AiIspEnable,/g' $ConfigPath/ipc/sensor/os04a10.json
sed -i -re "s/\"enable_aiisp\": .*/\"enable_aiisp\": $AiIspEnable,/g" $ConfigPath/ipc/sensor/os04a10.json

# -y    检测帧率：5，1
# sed -i '19s/{\"src\": -1, \"dst\": .*}/{\"src\": -1, \"dst\": $DetectFps}/2' $ConfigPath/ipc/ivps.json
# sed -i '63s/{\"src\": -1, \"dst\": .*}/{\"src\": -1, \"dst\": $DetectFps}/2' $ConfigPath/ipc/ivps.json
sed -i -re "19s/\{\"src\": -1, \"dst\": [0-9]*\}/\{\"src\": $SnsFps, \"dst\": $DetectFps\}/" $ConfigPath/ipc/ivps.json
sed -i -re "63s/\{\"src\": -1, \"dst\": [0-9]*\}/\{\"src\": $SnsFps, \"dst\": $DetectFps\}/" $ConfigPath/ipc/ivps.json

sed -i -re "19s/\{\"src\": -1, \"dst\": -1\}/\{\"src\": $SnsFps, \"dst\": $SnsFps\}/g" $ConfigPath/ipc/ivps.json
sed -i -re "63s/\{\"src\": -1, \"dst\": -1\}/\{\"src\": $SnsFps, \"dst\": $SnsFps\}/g" $ConfigPath/ipc/ivps.json

# -e    jenc帧率：5， 1
sed -i -re "34s/\"frame_rate\": .*/\"frame_rate\": $JencFps/g" $ConfigPath/ipc/encoder.json



# Check whether start process linked by static lib
if [[ $(expr match "$*" ".*-a.*") != 0 ]]
then
  static_lib="_s"
else
  static_lib=""
fi

# Open core dump
if [ $EnableCoreDump == 1 ] ; then
  ulimit -c unlimited
  echo /opt/data/core-%e-%p-%t > /proc/sys/kernel/core_pattern
fi

md5=`md5sum ${process}${static_lib} | awk '{ print $1 }'`
echo "launching ${process}${static_lib}, md5: ${md5} ..."

echo "$*"
# launch
if [ $RunInBackground == 1 ] ; then
  nohup $debug ./${process}${static_lib} "$*" &
else
  $debug ./${process}${static_lib} $*
fi
