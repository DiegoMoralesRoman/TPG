#ifndef UTILS_HPP
#define UTILS_HPP

// Maths
namespace tpg {
    template<typename T>
    class Vec2 {
        public:
            Vec2() = default;
            Vec2(const T value);
            Vec2(const T x, const T y);

            // Basic operators 
            inline Vec2<T> operator+(const Vec2<T>& other);
            inline Vec2<T>& operator+=(const Vec2<T>& other) {*this = *this + other; return *this;}
            inline Vec2<T> operator-(const Vec2<T>& other);
            inline Vec2<T>& operator-=(const Vec2<T>& other) {*this = *this - other; return *this;}
            inline Vec2<T> operator*(const T scalar);
            inline Vec2<T>& operator*=(const T scalar) {*this = *this * scalar; return *this;}
            inline Vec2<T> operator/(const T scalar);
            inline Vec2<T>& operator/=(const T scalar) {*this = *this / scalar; return *this;}

            T x = 0, y = 0;
    };

    template<typename T>
    class Vec3 {
        public:
            Vec3() = default;
            Vec3(const T value);
            Vec3(const T x, const T y, const T z);
            
            // Basic operators
            inline Vec3<T> operator+(const Vec3<T>& other);
            inline Vec3<T>& operator+=(const Vec3<T>& other) {*this = *this + other; return *this;}
            inline Vec3<T> operator-(const Vec3<T>& other);
            inline Vec3<T>& operator-=(const Vec3<T>& other) {*this = *this - other; return *this;}
            inline Vec3<T> operator*(const T scalar);
            inline Vec3<T>& operator*=(const T scalar) {*this = *this * scalar; return *this;}
            inline Vec3<T> operator/(const T scalar);
            inline Vec3<T>& operator/=(const T scalar) {*this = *this / scalar; return *this;}

            T x = 0, y = 0, z = 0;
    };
}

#endif // UTILS_HPP
