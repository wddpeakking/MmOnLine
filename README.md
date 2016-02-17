# MmOnLine
一个优秀的视频直播客户端

现基于windows，后续计划开发linux版本

主要技术：qt5.4.1 + ffmpeg

为了适跨平台需求：
  
  1.采集
  
    视频采集采用 opencv 
    音频采集采用 openal 
    
  2.编码
  
    视频编码采用格式 h264  （x264）
    音频编码采用格式 aac  (libaac)
    
  3.传输
  
