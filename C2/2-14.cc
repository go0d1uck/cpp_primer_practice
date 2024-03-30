// 程序是合法的，会输出1-9之和。
// 输出的是100 45
#include <iostream>

int main(int argc, char *argv[]) {
  int i = 100, sum = 0;
  for (int i = 0; i != 10; i++)
    sum += i;
  std::cout << i << " " << sum << std::endl;
  return 0;
}
