/**
 * C++ program copying a Cube currency by value.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
#include <iostream>
using uiuc::Cube;

int main()
{
  // Create a 1,000-valued cube
  Cube c(10);

  // Transfer the cube
  Cube y = c;
  Cube myCube(c);
  Cube x{c};

  std::cout << "The reference of Cube c is " << &c << std::endl;
  std::cout << "The reference of Cuve y is " << &y << std::endl;
  std::cout << "The reference of Cuve myCube is " << &myCube << std::endl;
  std::cout << "The reference of Cuve x is " << &x << std::endl;
  return 0;
}
