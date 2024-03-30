#include <iostream>
#include <string>

std::string global_str; //空字符串
int globa_int; // 0
int main (int argc, char *argv[]) {
  int local_int; // -1
  std::string local_str; // 空字符串
  std::cout << global_str << std::endl;
  std::cout << globa_int << std::endl;
  std::cout << local_str << std::endl;
  std::cout << local_int << std::endl;
  return 0;
}
