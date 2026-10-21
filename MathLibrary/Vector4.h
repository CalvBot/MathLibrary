#pragma once

#include <cmath>

namespace MathLibrary
{
    struct Vector4
    {
        float x, y, z, w;

        // Constructors using initializer lists
        Vector4() : x(0), y(0), z(0), w(0) {}
        Vector4(const Vector4& other) : x(other.x), y(other.y), z(other.z), w(other.w) {}
        Vector4(float _x, float _y, float _z, float _w) : x(_x), y(_y), z(_z), w(_w) {}
        
    };
}