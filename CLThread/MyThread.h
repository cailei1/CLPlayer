//
// Created by APPLE on 2023/2/2.
//

#ifndef CLPLAYER_MYTHREAD_H
#define CLPLAYER_MYTHREAD_H


class MyThread {
public:
    virtual void run() = 0;

    void start();
};


#endif //CLPLAYER_MYTHREAD_H
