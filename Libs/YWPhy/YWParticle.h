//
//  YWParticle.h
//  YWPhy
//
//  Created by wangyanqing on 2018/10/18.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#ifndef YWParticle_
#define YWParticle_

#include "YWMath/Transform.h"
namespace YPhy {
    class Particle
    {
    public:
        Particle();
        ~Particle();
        void Integrate(float dt);
        void SetMass(float m);
        void SetInverseMass(float im);
        YMath::Vec3 pos{0};
        YMath::Vec3 velocity{0};
        YMath::Vec3 acceleration{0};
        float damping{0};
        float inverse_mass{0};
    };
}

#endif
