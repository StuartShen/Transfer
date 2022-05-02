#include "ResponseCodec.h"

        ResponseCodec::ResponseCodec(){

        }
        //解码
        ResponseCodec::ResponseCodec(string enc){
            initMessage(enc);
        }
        //解码
       ResponseCodec::ResponseCodec(ResponseInfo*info){
           initMessage(info);
        }



        //给空构造准备
        void ResponseCodec::initMessage(string enc){
            m_encStr=enc;
        }


        void ResponseCodec::initMessage(ResponseInfo*info){
                m_msg.set_status(info->status);
                m_msg.set_seckeyid(info->secKeyID);
                m_msg.set_clientid(info->clientID);
                m_msg.set_serverid(info->serverID);
                m_msg.set_data(info->data);
        }

        string  ResponseCodec::encodeMsg(){
            string output;
            m_msg.SerializePartialToString(&output);
            return output;

        }

        void* ResponseCodec::decodeMsg(){
            m_msg.ParseFromString(m_encStr);

            return &m_msg;
        }

        ResponseCodec::~ResponseCodec(){


        }