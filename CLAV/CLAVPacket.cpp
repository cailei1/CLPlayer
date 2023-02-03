//
// Created by APPLE on 2023/2/3.
//

#include "CLAV.h"

CLAVPacket::CLAVPacket() {
    avPacket = av_packet_alloc();
}

CLAVPacket::~CLAVPacket() {
    av_packet_free(&avPacket);
}
