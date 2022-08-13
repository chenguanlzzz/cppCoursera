/**
 * C++ program sending a Cube by pointer.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "../Cube.h"
#include <iostream>

using uiuc::Cube;

bool sendCube(Cube *c)
{
  // ... logic to send a Cube somewhere ...
  std::cout << &c << std::endl;
  return true;
}

int main()
{
  // Create a 1,000-valued cube
  Cube c(10);
  std::cout << &c << std::endl;
  // Send the cube to someone
  sendCube(&c);

  return 0;
}
