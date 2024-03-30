#include "Sales_item.h"
#include <iostream>
#include <ostream>

int main(int argc, char *argv[]) {
  Sales_item a, b;
  std::cin >> a >> b;
  if (a.isbn() == b.isbn()) { // 判断
    std::cout << a + b << std::endl;
  } else {
    std::cout << "Data must refer to same ISBN" << std::endl;
  }
  return 0;
}
