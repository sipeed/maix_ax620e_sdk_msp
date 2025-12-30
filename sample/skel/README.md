sample_skel

1）功能说明：
skel文件夹下面的代码, 是爱芯SDK包提供的示例参考代码, 方便客户快速的理解SKEL整个模块的配置流程.

2）使用示例：
usage: ./sample_skel <options> ...
options:
-i,     Input File(yuv)
-r,     Input File Resolution(wxh)(yuv: should be input)
-w,     Write result image to new jpg file(path name, default: empty, not write result image)
-o,     Save ouput result(path name)
-m,     Models deployment path(path name)
-t,     Repeat times((unsigned int), default=1)
-I,     Interval sending time per frame((unsigned int)ms, default=0)
-F,     Framerate control for yuv video(src:dst)(default=25:25)
-Q,     Push quality threshold((float: 0-1), default=0)
-P,     Pose picth threshold(face push)((float: 0-180), default=180)
-Y,     Pose yaw threshold(face push)((float: 0-180), default=180)
-R,     Pose roll threshold(face push)((float: 0-180), default=180)
-B,     Blur threshold(face push)((float: 0-1), default=1)
-f,     Face feature analyzer enable((unsigned int), default=0)
-c,     Confidence((float: 0-1), default=0)
-l,     Lpr confidence((float: 0-1), default=0.45)
-H,     Human track size limit((unsigned int), default=0)
-V,     Vehicle track size limit((unsigned int), default=0)
-C,     Cylcle track size limit((unsigned int), default=0)
-d,     Skel detect type((unsigned int), default=2)
                0: detect only
                1: detect + track
                2: detect + track + push
-u,     Skel push strategy((unsigned int), default=3)
                1: fast push strategy
                2: push strategy
                3: best push strategy
-p,     Skel PPL((unsigned int), default=1)
                1: AX_SKEL_PPL_HVCP
                2: AX_SKEL_PPL_FACE
                3: AX_SKEL_PPL_PET
                4: AX_SKEL_PPL_GESTURE
-v,     Log level((unsigned int), default=5)
                0: LOG_EMERGENCY_LEVEL
                1: LOG_ALERT_LEVEL
                2: LOG_CRITICAL_LEVEL
                3: LOG_ERROR_LEVEL
                4: LOG_WARN_LEVEL
                5: LOG_NOTICE_LEVEL
                6: LOG_INFO_LEVEL
                7: LOG_DEBUG_LEVEL
-h,     print this message

-i 表示输入的YUV数据的文件名<必须>
-r 表示输入的YUV数据的分辨率,格式: wxh，比如1024x576<如果是输入yuv时必须输入分辨率>
-w 表示结果显示是否写到一个新的jpg文件；参数为需要保存的jpg文件的路径；如果写，文件将是原文件名+_result_xx.jpg[默认是不写新文件]
-o 表示将输出结果保存到指定文件夹[默认不保存]
-m 表示模型文件所在路径[不输入时，/opt/etc/skelModels]
-t 表示重复执行次数[默认: 1次]
-I 表示每次送帧的时间间隔[默认: 0]
-F 表示帧控[默认: 25:25]
-d 表示检测策略[默认: 2]
-u 表示推图策略[默认: 3]
-c 表示置信度
-l 表示车牌识别置信度
-Q 表示推图质量阈值[默认: 0.0, 范围: 0-1]
-P 表示人脸推图pitch角度阈值[默认: 180, 范围: 0-180]
-Y 表示人脸推图yaw角度阈值[默认: 180, 范围: 0-180]
-R 表示人脸推图roll角度阈值[默认: 180, 范围: 0-180]
-B 表示人脸推图模糊度阈值[默认: 1, 范围: 0-1, 值越小越清晰]
-f 表示是否进行人脸特征检测[默认: 0]
-H 表示检测人形数目限制
-V 表示检测机动车数目限制
-C 表示检测非机动车数目限制
-p 表示选择算法[默认: AX_SKEL_PPL_HVCP]
-v 表示选择LOG级别[默认: LOG_NOTICE_LEVEL]
-h 打印帮助信息

注：
    默认模型位置在: /opt/etc/skelModels下

3）测试结果范例
输入是YUV文件：
/opt/bin # ./sample_skel -i /mnt/pic/pic_1280_720_new_v1_p1.yuv -r1280x720 -p1
SKEL sample: V0.9.0 build: Sep 27 2023 14:57:32
[N][                            main][1703]: Task infomation:
[N][                            main][1704]:    Input file: /mnt/pic/pic_1280_720_new_v1_p1.yuv
[N][                            main][1705]:    Input file resolution: 1280x720
[N][                            main][1706]:    Repeat times: 1
[N][                            main][1707]: SKEL Init Elapse:
[N][                            main][1708]:    AX_SKEL_Init: 1 ms
[N][                            main][1709]:    AX_SKEL_Create: 262 ms
[N][                            main][1717]: #####SKEL Process times: 1
[N][                            main][1777]: *****SKEL Frame(1) Process
[N][                            main][1802]: SKEL Process Elapse:
[N][                            main][1803]:    AX_SKEL_SendFrame: 0 ms
[N][                            main][1817]:    AX_SKEL_GetResult: 25 ms
[N][                            main][1829]: SKEL Process Result:
[N][                            main][1834]:    Object Num: 2
[N][                            main][1844]:            Rect[0] plate: [403.090271, 317.835114, 91.875519, 26.211105], Confidence: 0.982603
[N][                            main][1867]:            [0]Point Set Size: 0
[N][                            main][1844]:            Rect[1] vehicle: [268.317902, 54.578266, 391.552399, 324.329559], Confidence: 0.946112
[N][                            main][1867]:            [1]Point Set Size: 0
[N][                            main][2212]: SKEL Process Objects Statistics: Body[0], Vehicle[1], Cycle[0], Face[0], Plate[1]
[N][                            main][2226]: SKEL Process Push Statistics: Body[0], Vehicle[0], Cycle[0], Face[0], Plate[0]
[N][                            main][2245]: SKEL Process Elapsed Info: Repeats: 1, (min: 25 ms, avr: 25 ms, max: 25 ms)
