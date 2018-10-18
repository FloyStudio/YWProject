//
//  Vector.h
//  YWPhy
//
//  Created by wangyanqing on 2018/10/17.
//  Copyright © 2018年 FloyStudio. All rights reserved.
//

#ifndef Vector_h
#define Vector_h

#include <cmath>

namespace YMath {
    class Vec2
    {
    public:
        ///default constructor
        Vec2(){}
        ///set x = y = r
        Vec2(float r):x(r),y(r){};
        ///set x=a ,y = b
        Vec2(float a, float b):x(a),y(b){}
        ///copy constructor
        Vec2(const Vec2& v): x(v.x),y(v.y){}
        
        ///assign constructor
        Vec2& operator=(const Vec2& v)
        {
            x = v.x;
            y = v.y;
            return *this;
        }
        ///v[index] = xxx
        float& operator[](int index)
        {
            return reinterpret_cast<float*>(this)[index];
        }
        ///xxx = v[index]
        const float& operator[](int index) const
        {
            return reinterpret_cast<const float*>(this)[index];
        }
        /// equal
        bool operator==(const Vec2& v) const
        {
            return x == v.x && y == v.y;
        }
        ///not equal
        bool operator!=(const Vec2& v) const
        {
            return x!=v.x || y!=v.y;
        }
        ///zero
        bool IsZero() const
        {
            return x==0 && y==0;
        }
        ///magtitude square
        float MagnitudeSquared() const
        {
            return x*x + y*y;
        }
        ///normalized
        bool IsNormalized() const
        {
            return std::fabs(Magnitude() - 1.0f) < 1e-4;
        }
        ///magnitude
        float Magnitude() const
        {
            return std::sqrt(MagnitudeSquared());
        }
        ///normalize
        float Normalize()
        {
            const float f = Magnitude();
            if (f > 0.0f)
                *this = *this / f;
            return f;
        }
        /// inverse
        Vec2 operator-() const
        {
            return Vec2(-x, -y);
        }
        ///add
        Vec2 operator+(const Vec2& v) const
        {
            return Vec2(x + v.x, y + v.y);
        }
        Vec2 operator+=(const Vec2& v)
        {
            x += v.x;
            y += v.y;
            return *this;
        }
        ///sub
        Vec2 operator-(const Vec2& v) const
        {
            return Vec2(x - v.x, y - v.y);
        }
        Vec2 operator-=(const Vec2& v)
        {
            x -= v.x;
            y -= v.y;
            return *this;
        }
        /// mul
        Vec2 operator*(float f) const
        {
            return Vec2(x*f, y*f);
        }
        Vec2 operator*=(float f)
        {
            x *= f;
            y *= f;
            return *this;
        }
        ///div
        Vec2 operator/(float f) const
        {
            f = 1.0f/f;
            return Vec2(x*f, y*f);
        }
        Vec2 operator/=(float f)
        {
            f = 1.0f / f;
            x *= f;
            y *= f;
            return *this;
        }
        /// dot
        float Dot(const Vec2& v) const
        {
            return x*v.x+y*v.y;
        }

        float x{0},y{0};
    };
    
    class Vec3
    {
    public:
        ///default constructor
        Vec3(){}
        ///set x = y = z = r
        Vec3(float r):x(r),y(r),z(r){};
        ///set x=a ,y = b, z = c
        Vec3(float a, float b, float c):x(a),y(b),z(c){}
        ///copy constructor
        Vec3(const Vec3& v): x(v.x),y(v.y),z(v.z){}
        
        ///assign constructor
        Vec3& operator=(const Vec3& v)
        {
            x = v.x;
            y = v.y;
            z = v.z;
            return *this;
        }
        ///v[index] = xxx
        float& operator[](int index)
        {
            return reinterpret_cast<float*>(this)[index];
        }
        ///xxx = v[index]
        const float& operator[](int index) const
        {
            return reinterpret_cast<const float*>(this)[index];
        }
        /// equal
        bool operator==(const Vec3& v) const
        {
            return x == v.x && y == v.y && z == v.z;
        }
        ///not equal
        bool operator!=(const Vec3& v) const
        {
            return x!=v.x || y!=v.y || z!=v.z;
        }
        ///zero
        bool IsZero() const
        {
            return x==0 && y==0 && z==0;
        }
        ///magtitude square
        float MagnitudeSquared() const
        {
            return x*x + y*y + z*z;
        }
        ///normalized
        bool IsNormalized() const
        {
            return std::fabs(Magnitude() - 1.0f) < 1e-4;
        }
        ///magnitude
        float Magnitude() const
        {
            return std::sqrt(MagnitudeSquared());
        }
        ///normalize
        float Normalize()
        {
            const float f = Magnitude();
            if (f > 0.0f)
                *this = *this / f;
            return f;
        }
        /// inverse
        Vec3 operator-() const
        {
            return Vec3(-x, -y, -z);
        }
        ///add
        Vec3 operator+(const Vec3& v) const
        {
            return Vec3(x + v.x, y + v.y, z + v.z);
        }
        Vec3 operator+=(const Vec3& v)
        {
            x += v.x;
            y += v.y;
            z += v.z;
            return *this;
        }
        ///sub
        Vec3 operator-(const Vec3& v) const
        {
            return Vec3(x - v.x, y - v.y, z - v.z);
        }
        Vec3 operator-=(const Vec3& v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;
            return *this;
        }
        /// mul
        Vec3 operator*(float f) const
        {
            return Vec3(x*f, y*f, z*f);
        }
        Vec3 operator*=(float f)
        {
            x *= f;
            y *= f;
            z *= f;
            return *this;
        }
        ///div
        Vec3 operator/(float f) const
        {
            f = 1.0f/f;
            return Vec3(x*f, y*f, z*f);
        }
        Vec3 operator/=(float f)
        {
            f = 1.0f / f;
            x *= f;
            y *= f;
            z *= f;
            return *this;
        }
        /// dot
        float Dot(const Vec3& v) const
        {
            return x*v.x+y*v.y+z*v.z;
        }
        /// cross
        Vec3 Cross(const Vec3& v) const
        {
            return Vec3(y*v.z-z*v.y, z*v.x-x*v.z, x*v.y-y*v.x);
        }
        float x{0}, y{0}, z{0};
    };
    
    class Vec4
    {
    public:
        ///default constructor
        Vec4(){}
        ///set x = y = z = r
        Vec4(float r):x(r),y(r),z(r),w(r){}
        ///set x=a ,y = b, z = c
        Vec4(float a, float b, float c, float d):x(a),y(b),z(c),w(d){}
        ///copy constructor
        Vec4(const Vec4& v): x(v.x),y(v.y),z(v.z),w(v.w){}
        
        ///assign constructor
        Vec4& operator=(const Vec4& v)
        {
            x = v.x;
            y = v.y;
            z = v.z;
            w = v.w;
            return *this;
        }
        ///v[index] = xxx
        float& operator[](int index)
        {
            return reinterpret_cast<float*>(this)[index];
        }
        ///xxx = v[index]
        const float& operator[](int index) const
        {
            return reinterpret_cast<const float*>(this)[index];
        }
        /// equal
        bool operator==(const Vec4& v) const
        {
            return x == v.x && y == v.y && z == v.z && w == v.w;
        }
        ///not equal
        bool operator!=(const Vec4& v) const
        {
            return x!=v.x || y!=v.y || z!=v.z || w!=v.w;
        }
        ///zero
        bool IsZero() const
        {
            return x==0 && y==0 && z==0 && w==0;
        }
        ///magtitude square
        float MagnitudeSquared() const
        {
            return x*x + y*y + z*z + w*w;
        }
        ///normalized
        bool IsNormalized() const
        {
            return std::fabs(Magnitude() - 1.0f) < 1e-4;
        }
        ///magnitude
        float Magnitude() const
        {
            return std::sqrt(MagnitudeSquared());
        }
        ///normalize
        float Normalize()
        {
            const float f = Magnitude();
            if (f > 0.0f)
                *this = *this / f;
            return f;
        }
        /// inverse
        Vec4 operator-() const
        {
            return Vec4(-x, -y, -z, -w);
        }
        ///add
        Vec4 operator+(const Vec4& v) const
        {
            return Vec4(x + v.x, y + v.y, z + v.z, w+v.w);
        }
        Vec4 operator+=(const Vec4& v)
        {
            x += v.x;
            y += v.y;
            z += v.z;
            w += v.w;
            return *this;
        }
        ///sub
        Vec4 operator-(const Vec4& v) const
        {
            return Vec4(x - v.x, y - v.y, z - v.z, w - v.w);
        }
        Vec4 operator-=(const Vec4& v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;
            w -= v.w;
            return *this;
        }
        /// mul
        Vec4 operator*(float f) const
        {
            return Vec4(x*f, y*f, z*f, w*f);
        }
        Vec4 operator*=(float f)
        {
            x *= f;
            y *= f;
            z *= f;
            w *= f;
            return *this;
        }
        ///div
        Vec4 operator/(float f) const
        {
            f = 1.0f/f;
            return Vec4(x*f, y*f, z*f, w*f);
        }
        Vec4 operator/=(float f)
        {
            f = 1.0f / f;
            x *= f;
            y *= f;
            z *= f;
            w *= f;
            return *this;
        }
        /// dot
        float Dot(const Vec4& v) const
        {
            return x*v.x+y*v.y+z*v.z+w*v.w;
        }
        /// get x, y, z
        Vec3 GetXYZ() const
        {
            return Vec3(x,y,z);
        }
        float x{0.0f},y{0.0f},z{0.0f},w{1.0f};
    };
}
#endif /* Vector_h */
