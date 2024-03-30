#include <iostream>

int main(int argc, char *argv[]) {
  int cnt = 50, sum = 0;
  while (cnt <= 100) {
    sum += cnt;
    cnt++;
  }
  std::cout << sum;
  return 0;
}
