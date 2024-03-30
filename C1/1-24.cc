// 由于我之前已经学习过C++更多的做法，所以直接用Map写了。
// 但是配套图书答案如下，仅供初学者参考
#include "Sales_item.h"
#include <iostream>
#include <ostream>

int main() {
  Sales_item trans1, trans2;
  int num = 1;
  std::cout << "请输入若干销售记录:" << std::endl;
  if (std::cin >> trans1) {
    while (std::cin >> trans2) {
      if (compareIsbn(trans2, trans1)) {
        num++;
      } else {
        std::cout << trans1.isbn() << "有记录" << num << "条";
        std::endl(std::cout);
        trans1 = trans2;
        num = 1;
      }
    }
  } else {
    std::cout << "没有数据";
    std::endl(std::cout);
  }
  std::cout << trans1.isbn() << "有记录" << num << "条"; // 输出最后一条
  std::endl(std::cout);
}
