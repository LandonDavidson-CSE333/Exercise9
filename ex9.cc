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
  std::cout << v1 << "\n";
  std::cout << v2 << "\n";
  std::cout << v3 << "\n";

  // Add + vectors
  std::cout << v1 + v3 << "\n";
  std::cout << v3 + v1 << "\n";
}
