// Copyright 2025 Landon Davidson
// landond@uw.edu

#include <iostream>

#include "Vector.h"

int main(int argc, char** argv) {
  // Initialize three vectors
  vector333::Vector v1(1, 2, 3);
  vector333::Vector v2(4, 5, 6);
  vector333::Vector v3;

  // Print initial values
  std::cout << "v1 = " << v1 << "\n";
  std::cout << "v2 = " << v2 << "\n";
  std::cout << "v3 = " << v3 << "\n";

  // Add + vectors
  std::cout << "v1 + v2 = " << v1 + v2 << "\n";
  std::cout << "v2 + v1 = " << v2 + v1 << "\n";

  // Subtract - vectors
  std::cout << "v2 - v1 = " << v2 - v1 << "\n";
  std::cout << "v1 - v2 = " << v1 - v2 << "\n";

  // Scalar multiplication
  std::cout << "v1 * 2 = " << v1 * 2 << "\n";
  std::cout << "5 * v1 = " << 5 * v1 << "\n";

  // Dot product Vector * Vector
  std::cout << "v1 * v3 = " << v1 * v3 << "\n";
  std::cout << "v2 * v1 = " << v2 * v1 << "\n";

  // Copy and initialize new Vectors
  vector333::Vector v4 = v1 + v2;
  vector333::Vector v5;
  v5 = v1 * 4;

  // Print initial values
  std::cout << "v4 = " << v4 << "\n";
  std::cout << "v5 = " << v5 << "\n";

  // Increment += Vectors
  v1 += v5;
  std::cout << "v1 += v5: " << v1 << "\n";

  // Decrement -= Vectors
  v2 -= v4;
  std::cout << "v2 -= v4: " << v2 << "\n";
}
