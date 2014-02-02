#ifndef __VEC2_H__
#define __VEC2_H__

#include <iostream>
#include <cmath>

class Vec2 {
    public:
        float x;
        float y;
        
        Vec2();
        Vec2(float x, float y);
        Vec2(const Vec2& v);
        Vec2(const Vec2& from,const Vec2 & to);
    
        Vec2& operator=(const Vec2 & v);    
        Vec2& operator+=(const Vec2 & v);
        Vec2 operator+(const float a) const;
        Vec2 operator-(const float a) const;
        Vec2 operator+(const Vec2 & v) const;
        Vec2& operator-=(const Vec2 & v);
        Vec2 operator-(const Vec2 & v) const;
        Vec2& operator*=(const float a);
        Vec2 operator*(const float a)const;
        Vec2& operator/=(const float a);
        Vec2 operator/(const float a)const;
        friend Vec2 operator*(const float a,const Vec2 & v);

        float length()const;
        Vec2& normalize();
};
#endif 
