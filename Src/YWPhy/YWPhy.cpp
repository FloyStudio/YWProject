//
//  YWPhy.cpp
//  YWPhy
//
//  Created by wangyanqing on 2018/10/17.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#include <iostream>
#include "YWPhy.hpp"
#include "YWPhyPriv.hpp"

void YWPhy::HelloWorld(const char * s)
{
    YWPhyPriv *theObj = new YWPhyPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void YWPhyPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

