cmake_minimum_required(VERSION 3.15)


include_directories(../3rdpart/ffmpeg/include)


# 作为 library
add_library(CLAVE CLAVReader.cpp CLAVPacket.cpp)


