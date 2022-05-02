#pragma once
#include <iostream>
#include <string>
#include "Codec.h"
#include "Message.pb.h"

using namespace std;

struct ResponseInfo{
    int status;
    int secKeyID;
    string clientID;
    string serverID;
    string data;
};



class ResponseCodec:public Codec{
    public:
        ResponseCodec();
        //解码
        ResponseCodec(string enc);
        //解码
        ResponseCodec(ResponseInfo*info);



        //给空构造准备
        void initMessage(string enc);
        void initMessage(ResponseInfo*info);

        string  encodeMsg();

        void*decodeMsg();
        ~ResponseCodec();

private:
    string m_encStr;
    ResponseMsg m_msg;



};