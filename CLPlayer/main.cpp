#include <iostream>
#include "CLThread/MyThread.h"
#include <thread>

class EncodeThread : public MyThread {
public:
    std::string name = "EncodeThread";

    void run() override {
        printf("this thread %s", name.c_str());
    }
};


int main() {
    EncodeThread encodeThread;
    encodeThread.start();

    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 0;
}
