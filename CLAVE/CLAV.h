//
// Created by APPLE on 2023/2/3.
//

extern "C" {
#include<libavformat/avformat.h>
}

class CLAVPacket {
public:
    CLAVPacket();
    ~CLAVPacket();
public:
    AVPacket *avPacket;
};


class CLAVReader {
public:
    CLAVReader();

    ~CLAVReader();


    int open(const char *path);

    int close();

    int read(CLAVPacket *packet);

private:
    AVFormatContext *avFormatContext;
};



