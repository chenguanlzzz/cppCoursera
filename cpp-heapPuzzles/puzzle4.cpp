/**
 * C++ puzzle program.  Try to figure out the result before running!
 *
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
  int *x;
  int size = 3;
  int arr[] = {1, 2, 3};
  // x = new int[size];
  x = arr;
  for (int i = 0; i < size; i++)
  {
    // x[i] = i + 3;
    std::cout << arr[i] << std::endl;
    std::cout << &arr[i] << std::endl;
    std::cout << *(arr + i) << std::endl;
  }

  // delete[] x;
}
