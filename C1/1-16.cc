#include <iostream>
#include <ostream>
int main(int argc, char *argv[]) {
  int i, sum = 0;
  while (std::cin >> i) {
    sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
