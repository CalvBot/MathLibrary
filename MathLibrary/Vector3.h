#pragma once

#include <cmath>

namespace MathLibrary
{
    struct Vector3
    {
        float x, y, z;

        // Constructors using initializer lists
        Vector3() : x(0), y(0), z(0) {}
        Vector3(const Vector3& other) : x(other.x), y(other.y), z(other.z) {}
        Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}
        
        // Operator method
		Vector3 operator+(const Vector3& rhs) const {
			return Vector3(x + rhs.x, y + rhs.y, z + rhs.z);
		}
		
        Vector3 operator-(const Vector3& rhs) const {
            return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
        }
		
        Vector3 operator*(const Vector3& rhs) const {
            return Vector3(x * rhs.x, y * rhs.y, z * rhs.z);
        }
		
        Vector3 operator*(float scalar) const {
            return Vector3(x * scalar, y * scalar, z * scalar);
        }
		
        Vector3 operator/(float scalar) const {
            return Vector3(x / scalar, y / scalar, z / scalar);
        }
       
        Vector3 operator=(const Vector3& rhs) {
            return Vector3(x = rhs.x, y = rhs.y, z = rhs.z);
        }
    };
}