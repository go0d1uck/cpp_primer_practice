#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  std::cout << "Who goes with F\145rgus?\012" << std::endl; // 数据类型为字符串
  std::cout << 3.14e1L << std::endl; // 数据类型为double
  // std::cout << 1024f << std::endl; 这个会报错，原因是f只针对浮点数据
  std::cout << 3.14 << std::endl; // 数据类型为double
  return 0;
}
