#pragma once
#include <iostream>


class Codec{
    
public:
    Codec();
    virtual std::string endcodeMsg();//编码
    virtual void* decodeMsg();

    //虚析构
    //动态绑定  多态
    virtual ~Codec();
};