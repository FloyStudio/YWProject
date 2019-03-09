//
//  YWParticle.cpp
//  YWPhy
//
//  Created by wangyanqing on 2018/10/18.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#include "YWPhysics/YWParticle.h"

namespace YPhy {
    Particle::Particle()
    {
        
    }
    Particle::~Particle()
    {
        
    }
    
    void Particle::SetMass(float m)
    {
        inverse_mass = 1.0f / m;
    }
    
    void Particle::SetInverseMass(float im)
    {
        inverse_mass = im;
    }
    
    void Particle::Integrate(float dt)
    {
        if (inverse_mass < 0.0)
            return;
        ///update position
        pos += velocity*dt;
        YMath::Vec3 resultAcc = acceleration;
        velocity += acceleration * dt;
        velocity *= std::pow(damping, dt);
    }
}

