#include <iostream>

void style()
{
  std::cout << "///--------------///" << std::endl;
}

int return_zero()
{
  return 0;
}

int return_nonzero()
{
  return 1;
}

int main()
{
  style();
  std::cout << "Hello, world" << std::endl;
  style();

  return_zero();
}
