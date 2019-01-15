//
//  Transform.h
//  YWMath
//
//  Created by wangyanqing on 2018/10/19.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#ifndef Transform_h
#define Transform_h

#include "YWFoundation/Quaternion.h"
#include "YWFoundation/Vector.h"

namespace YMath {
    class Transform
    {
    public:
        Vec3 pos;
        Quaternion rot;
    };
}
#endif /* Transform_h */
