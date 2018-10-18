//
//  YWPhy.cpp
//  YWPhy
//
//  Created by wangyanqing on 2018/10/18.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#include <iostream>
#include "YWPhy.h"
#include "YWPhyPriv.h"
#include "YWMath/Vector.h"

YMath::Vec2 vec(0.0);

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

