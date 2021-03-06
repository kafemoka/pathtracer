#ifndef __MATHS_HELPERS_H__
#define __MATHS_HELPERS_H__

#ifdef M_PI
	#undef M_PI
#endif
#define M_PI		3.14159265358979323846f
#define INV_PI      0.31830988618379067154f
#define INV_TWOPI  	0.15915494309189533577f
#define INV_FOURPI 	0.07957747154594766788f

#define PI_360		(M_PI * 2.0)

#ifndef INFINITY
#define INFINITY FLT_MAX
#endif

#define EPSILON     1e-5f

inline float Radians(float deg) {
    return ((float)M_PI/180.f) * deg;
}

inline float Degrees(float rad) {
    return (180.f/(float)M_PI) * rad;
}

inline float Lerp(float t, float v1, float v2) {
    return (1.f - t) * v1 + t * v2;
}

inline float Clamp(float val, float low, float high) {
    if(val > high) return high;
    else if(val < low) return low;
    else return val;
}

inline float Max(float a, float b) {
    return a > b ? a : b;
}

inline float Min(float a, float b) {
    return a > b ? b : a;
}

inline void Swap(float& a, float& b) {
    float tmp = a;
    a = b;
    b = tmp;
}

#endif
