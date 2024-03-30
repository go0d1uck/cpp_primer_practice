#include <iostream>
#include <ostream>
#include <type_traits>

int main(int argc, char *argv[]) {
  std::cout << "Please enter two number" << std::endl;
  int a, b;
  std::cin >> a >> b;
  if (a > b) {
    std::swap(a, b);
  }
  while(a <= b)
  {
    std::cout << a;
    std::endl(std::cout);
    a++;
  }
  return 0;
}
