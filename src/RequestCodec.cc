#include "RequestCodec.h"


RequestCodec::RequestCodec(){


}
//解码
RequestCodec::RequestCodec(string encstr){
    initMessage(encstr);
}
//解码
RequestCodec::RequestCodec(RequestInfo*info){

    initMessage(info);

}

//给空构造准备
void RequestCodec::initMessage(string encStr){
    m_encStr=encStr;

}
void RequestCodec::initMessage(RequestInfo*info){

    m_msg.set_cmdtype(info->cmdType);
    m_msg.set_clientid(info->clientID);
    m_msg.set_serverid(info->serverID);
    m_msg.set_sign(info->sign);
    m_msg.set_data(info->data);

}

//编码
string  RequestCodec::encodeMsg(){
    string output;
    m_msg.SerializePartialToString(&output);
    return output;
}

void* RequestCodec::decodeMsg(){

    m_msg.ParseFromString(m_encStr);
    return &m_msg;

}

RequestCodec::~RequestCodec(){


     
}