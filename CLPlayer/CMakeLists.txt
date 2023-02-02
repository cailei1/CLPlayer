cmake_minimum_required(VERSION 3.15)
project(CLPlayer)

set(CMAKE_CXX_STANDARD 14)


# 让CLPlayer 这个主module 能找到 底下的所有的头文件
include_directories(../)


add_executable(CLPlayer main.cpp)

target_link_libraries(CLPlayer CLThread)
