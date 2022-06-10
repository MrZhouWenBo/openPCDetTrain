# 本工程的运行环境为openPCDet_3.8
    其具体配置已经复制到openPCDet_3.8_env.yaml中
    其他及其进行该conda环境配置只需运行    conda env create -f openPCDet_3.8_env.yaml

# 本工程代码为对openpcdet的修改，目的为训练所需3D检测模型
    执行代码在./tools/train.py
# commit1 2022.6.10 
    已训练 my_centerpoint_change_head.yaml 和 my_centerpoint_yolo_down4.yaml两个模型
    此两个模型为对centerPoint的改版
