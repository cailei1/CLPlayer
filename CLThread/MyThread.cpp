//
// Created by APPLE on 2023/2/2.
//

#include <thread>
#include "MyThread.h"

void MyThread::start() {
    // 开启线程 执行外部的虚函数 run 方法
    std::thread t(&MyThread::run, this);
    t.detach();
}
