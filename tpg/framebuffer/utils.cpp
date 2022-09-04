#include "utils.hpp"

#include <cstddef>

using namespace tpg;

// Template overloads
    // Vec2
template class tpg::Vec2<size_t>;
template class tpg::Vec2<float>;
template class tpg::Vec2<double>;
    // Vec3
template class tpg::Vec3<size_t>;
template class tpg::Vec3<float>;
template class tpg::Vec3<double>;

// ==================================================
// VEC2
// ==================================================
template<typename T>
Vec2<T>::Vec2(const T value)
    : x(value), y(value) {}

template<typename T>
Vec2<T>::Vec2(const T x, const T y)
    : x(x), y(y) {}

// Basic math operators
template<typename T>
Vec2<T> Vec2<T>::operator+(const Vec2<T> &other) {
    return {x + other.x, y + other.y};
}

template<typename T>
Vec2<T> Vec2<T>::operator-(const Vec2<T> &other) {
    return {x - other.x, y - other.y};
}

template<typename T>
Vec2<T> Vec2<T>::operator*(const T scalar) {
    return {x * scalar, y * scalar};
}

template<typename T>
Vec2<T> Vec2<T>::operator/(const T scalar) {
    return {x / scalar, y / scalar};
}
// ==================================================
// VEC3
// ==================================================
template<typename T>
Vec3<T>::Vec3(const T value)
    : x(value), y(value), z(value) {}

template<typename T>
Vec3<T>::Vec3(const T x, const T y, const T z)
    : x(x), y(y), z(z) {}

// Basic math operators
template<typename T>
Vec3<T> Vec3<T>::operator+(const Vec3<T> &other) {
    return {x + other.x, y + other.y, z + other.z};
}

template<typename T>
Vec3<T> Vec3<T>::operator-(const Vec3<T> &other) {
    return {x - other.x, y - other.y, z - other.z};
}

template<typename T>
Vec3<T> Vec3<T>::operator*(const T scalar) {
    return {x * scalar, y * scalar, z * scalar};
}

template<typename T>
Vec3<T> Vec3<T>::operator/(const T scalar) {
    return {x / scalar, y / scalar, z / scalar};
}
