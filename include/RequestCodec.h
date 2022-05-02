#pragma once
#include <iostream>
#include <string>
#include "Codec.h"
#include "Message.pb.h"

using namespace std;

struct RequestInfo{
    int cmdType;
    string clientID;
    string serverID;
    string sign;
    string data;


};

class RequestCodec:public Codec{
    public:
        RequestCodec();
        //解码
        RequestCodec(string encstr);
        //解码
        RequestCodec(RequestInfo*info);

        //给空构造准备
        void initMessage(string encStr);
        void initMessage(RequestInfo*info);

        string  encodeMsg();

        void*decodeMsg();
        ~RequestCodec();

private:
    string m_encStr;
    RequestMsg m_msg;



};