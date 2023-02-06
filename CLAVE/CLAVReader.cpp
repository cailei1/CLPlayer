//
// Created by APPLE on 2023/2/3.
//

#include "CLAV.h"

CLAVReader::CLAVReader() {
    avFormatContext = avformat_alloc_context();
}

CLAVReader::~CLAVReader() {
    avformat_free_context(avFormatContext);
}


int CLAVReader::open(const char *path) {
    int ret = avformat_open_input(&avFormatContext, path, nullptr, nullptr);
    if (!ret) {
        avformat_find_stream_info(avFormatContext, nullptr);
    }
    return ret;
}

int CLAVReader::close() {
    avformat_close_input(&avFormatContext);
    return 0;
}

int CLAVReader::read(CLAVPacket *packet) {
    int ret = av_read_frame(avFormatContext, packet->avPacket);
    return ret;
}