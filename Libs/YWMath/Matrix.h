//
//  Matrix.h
//  YWMath
//
//  Created by wangyanqing on 2018/10/18.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#ifndef Matrix_h
#define Matrix_h

#include "YWMath/Vector.h"

namespace YMath {
   class Mat3
   {
   public:
       Vec3 col0,col1,col2;
   };
    
    class Mat4
    {
    public:
        Vec4 col0, col1, col2, col3;
    }
}

#endif /* Matrix_h */
