/**
 * C++ program allocating and free'ing heap memory.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include <iostream>
using uiuc::Cube;

int main()
{
  int *p = new int;
  int *x = new int;
  Cube *c = new Cube;

  *p = 42;
  (*c).setLength(4);
  std::cout << &p << std::endl;
  std::cout << *p << std::endl;
  std::cout << &c << std::endl;
  std::cout << p << std::endl;
  std::cout << c << std::endl;
  delete c;
  std::cout << c << std::endl;
  std::cout << &c << std::endl;

  c = nullptr;
  delete p;
  std::cout << p << std::endl;
  std::cout << *p << std::endl;
  std::cout << &p << std::endl;
  p = nullptr;
  std::cout << p << std::endl;
  std::cout << &p << std::endl;
  std::cout << *p << std::endl;
  return 0;
}
