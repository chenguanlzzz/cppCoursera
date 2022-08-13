/**
 * C++ program printing various memory values using heap-allocated memory.
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

int main()
{
  int *numPtr = new int;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " << numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;
  int n = memcmp(numPtr, &numPtr, sizeof(int));
  if (n > 0)
  {
    std::cout << numPtr << " is greater than " << &numPtr << std::endl;
  }
  else
  {
    std::cout << numPtr << " is less than " << &numPtr << std::endl;
  }
  *numPtr = 42;
  std::cout << "*numPtr assigned 42." << std::endl;

  std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " << numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;

  numPtr = nullptr;
  std::cout << "*numPtr assigned null pointer." << std::endl;

  // std::cout << "*numPtr: " << *numPtr << std::endl;
  std::cout << " numPtr: " << numPtr << std::endl;
  std::cout << "&numPtr: " << &numPtr << std::endl;
  return 0;
}