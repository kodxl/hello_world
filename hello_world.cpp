#include <iostream>

void style()
{
  std::cout << "///--------------///" << std::endl;
}

int return_zero()
{
  return 0;
}

int main()
{
  style();
  std::cout << "Hello, world" << std::endl;
  style();

  return_zero();
}
