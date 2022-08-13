/**
 * C++ program using the & operator to find the address of a variable in memory.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main()
{
  int num = 7;
  int *p = &num;
  std::cout << "Value: " << num << std::endl;
  std::cout << "Address: " << &num << std::endl;
  std::cout << "p: " << p << std::endl;
  std::cout << "*p: " << *p << std::endl;
  std::cout << "&p: " << &p << std::endl;
  return 0;
}
