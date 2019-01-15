//
//  Quaternion.h
//  YWMath
//
//  Created by wangyanqing on 2018/10/19.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#ifndef Quaternion_h
#define Quaternion_h

#include "Vector.h"
#include <cmath>

namespace YMath {
    ///quaternion class
    class Quaternion
    {
    public:
        Quaternion() = default;
        ~Quaternion() = default;
        Quaternion(float i = 0.0f, float j = 0.0f, float k = 0.0f ,float a = 1.0f):
        x(i),y(j),z(k),w(a){}
        Quaternion(float radian, const Vec3& unit_axis)
        {
            const float a = radian * 0.5f;
            const float s = std::sin(a);
            w = std::cos(a);
            x = unit_axis.x * s;
            y = unit_axis.y * s;
            z = unit_axis.z * s;
        }
        /// copy
        Quaternion(const Quaternion& q):x(q.x),y(q.y),z(q.z),w(q.w){}
        /// matrix->quaternion
        ///explicit Quaternion(const Mat3& mat);
        /// identity
        bool IsIdentity() const
        {
            return x == 0.0f && y == 0.0f && z == 0.0f && w==1.0f;
        }
        ///operator
        bool operator==(const Quaternion& q)
        {
            return x == q.x && y == q.y && z == q.z && w == q.w;
        }
        Quaternion& operator=(const Quaternion& q)
        {
            x = q.x;
            y = q.y;
            z = q.z;
            w = q.w;
            return *this;
        }
        
        /// get radian
        float GetAngle() const
        {
            return std::acos(w) * 2.0f;
        }
        ///dot
        float Dot(const Quaternion& q) const
        {
            return x*q.x+y*q.y+z*q.z+w*q.w;
        }
        ///magnitude
        float MagnitudeSquared() const
        {
            return x*x + y*y + z*z + w*w;
        }
        float Magnitude() const
        {
            return std::sqrt(MagnitudeSquared());
        }
        /// get radian between this and q
        float GetAngle(const Quaternion&q) const
        {
            return std::acos(Dot(q))*2.0f;
        }
        Quaternion GetNormalized() const
        {
            const float s = 1.0f / Magnitude();
            return Quaternion(x*s,y*s,z*s,w*s);
        }
        float Normalize()
        {
            const float mag = Magnitude();
            if (mag != 0.0f)
            {
                const float imag = 1.0f / mag;
                x *= imag;
                y *= imag;
                z *= imag;
                w *= imag;
            }
            return mag;
        }
    private:
        float x,y,z,w;
    };
}
#endif /* Quaternion_h */
