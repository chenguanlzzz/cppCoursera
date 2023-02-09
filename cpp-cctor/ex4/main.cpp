/**
 * C++ program copying a Cube class.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
#include <iostream>

using uiuc::Cube;

int main()
{
  Cube c;
  Cube myCube;
  std::cout << "c: " << &c << std::endl;
  std::cout << "myCube: " << &myCube << std::endl;

  myCube = c;

  std::cout << "c: " << &c << std::endl;
  std::cout << "myCube: " << &myCube << std::endl;

  return 0;
}
