/**
 * C++ program copying a Cube currency pointer.
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
  Cube *myCube = &c;

  std::cout << "The reference of Cube c is " << &c << std::endl;
  std::cout << "The reference of Cuve myCube is " << &myCube << std::endl;

  return 0;
}
