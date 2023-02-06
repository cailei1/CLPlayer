#include <iostream>
#include "CLThread/MyThread.h"
#include <thread>
#include <CLAVE/CLAV.h>

class EncodeThread : public MyThread {
public:
    std::string name = "EncodeThread";

    void run() override {
        printf("this thread %s", name.c_str());
    }
};


int main2() {
    EncodeThread encodeThread;
    encodeThread.start();

    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 0;
}


int main(){
    CLAVReader reader;
    int ret = reader.open("/Users/apple/Downloads/demo.mp4");
    if(ret){
        printf("Open File Fail !!!\n");
    }
    while (1){
        CLAVPacket packet;
        ret = reader.read(&packet);
        if(ret){
            break;
        }
        printf("Read Packet Success\n");
    }
    reader.close();
    return 0;
}