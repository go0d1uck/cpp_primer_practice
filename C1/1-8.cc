#include <iostream>

int main (int argc, char *argv[]) {
  std::cout << "/*";
  std::cout << "*/";
  std::cout << /* "*/"*/;
  std::cout << /* "*/" /* "/*" */;
  //显然只有第三个是非法的，原因是后面缺少双引号。
  return 0;
}
