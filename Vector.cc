// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>

#include "Vector.h"

namespace vector333 {
  Vector::Vector(const Vector& src) {
    x_ = src.get_x();
    y_ = src.get_y();
    z_ = src.get_z();
  }

  Vector& Vector::operator=(const Vector &src) {
    x_ = src.get_x();
    y_ = src.get_y();
    z_ = src.get_z();
    return *this;
  }

  Vector& Vector::operator+=(const Vector &src) {
    x_ += src.get_x();
    y_ += src.get_y();
    z_ += src.get_z();
    return *this;
  }

  Vector& Vector::operator-=(const Vector &src) {
    x_ -= src.get_x();
    y_ -= src.get_y();
    z_ -= src.get_z();
    return *this;
  }


  Vector operator+(const Vector &a, const Vector &b) {
    Vector tmp = a;
    return tmp += b;
  }

  Vector operator-(const Vector &a, const Vector &b) {
    Vector tmp = a;
    return tmp -= b;
  }

  std::ostream& operator<<(std::ostream &out, const Vector &src) {
    out << "(" << src.get_x() << "," << src.get_y() << "," << src.get_z() << ")";
    return out;
  }

  double operator*(const Vector &a, const Vector &b) {
    double product = a.get_x() * b.get_x();
    product += a.get_y() * b.get_y();
    product += a.get_z() * b.get_z();
    return product;
  }

  Vector operator*(const Vector &a, double b) {
    Vector tmp(a.get_x() * b, a.get_y() * b, a.get_z() * b);
    return tmp;
  }

  Vector operator*(double a, const Vector &b) {
    Vector tmp(b.get_x() * a, b.get_y() * a, b.get_z() * a);
    return tmp;
  }
}
