#include <iostream>
#include <ostream>
#include <type_traits>
int main(int argc, char *argv[]) {
  // 1-9
  int sum = 0;
  for (int i = 50; i <= 100; i++) {
    sum += i;
  }
  std::cout << sum << std::endl;
  // 1-10
  for (int i = 10; i >= 0; i--) {
    std::cout << i;
    std::endl(std::cout);
  }
  std::cout << "Please enter two number\n";
  int a,b;
  std::cin >> a >> b;
  if(a > b) std::swap(a, b);
  for(int i = a;i <= b;i++)
    std::cout << i << std::endl;
  return 0;
}
