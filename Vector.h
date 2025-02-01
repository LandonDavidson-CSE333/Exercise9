// Copyright 2025 Landon Davidson
// landond@uw.edu

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

namespace vector333 {
  class Vector {
    public:
    // Zero arg constructor that initializes all fields to zero
    Vector() : x_(0), y_(0), z_(0) {};
    // Constructor to assign each member
    Vector(double x, double y, double z) : x_(x), y_(y), z_(z) {};
    // Copy the coords from src vector to this
    Vector(const Vector& src);
    // No heap usage so deconstructor is empty
    ~Vector() {}

    // Getters for x, y, z
    double get_x() const {return x_;}
    double get_y() const {return y_;}
    double get_z() const {return z_;}

    // Assignment = operator overload
    Vector& operator=(const Vector &src);
    // Increment += operator overload
    Vector& operator+=(const Vector &src);
    // Decrement -= operator overload
    Vector& operator-=(const Vector &src);

    private:
    // Private members for the x, y, z components of vector
    double x_;
    double y_;
    double z_;
  };

  // Addition + operator overload
  Vector operator+(const Vector &a, const Vector &b);
  // Subtraction - operator overload
  Vector operator-(const Vector &a, const Vector &b);
  // Output << operator overload
  std::ostream& operator<<(std::ostream &out, const Vector &src);
  // Multiply * operator overload for Vector * Vector
  double operator*(const Vector &a, const Vector &b);
  // Multiply * operator overload for Vector * double
  double operator*(const Vector &a, double b);
}

#endif //VECTOR_H
