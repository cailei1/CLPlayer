cmake_minimum_required(VERSION 3.15)
project(CLPlayer)

set(CMAKE_CXX_STANDARD 14)


# 让CLPlayer 这个主module 能找到 底下的所有的头文件
include_directories(../)
include_directories(../3rdpart/ffmpeg/include)

link_directories(../3rdpart/ffmpeg/lib)


add_executable(CLPlayer main.cpp)

target_link_libraries(CLPlayer CLThread CLAVE)

target_link_libraries(CLPlayer avcodec avdevice avfilter avformat avutil swresample swscale)