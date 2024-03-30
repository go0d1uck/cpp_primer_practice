#include "Sales_item.h"
#include <iostream>

int main(int argc, char *argv[]) {
  Sales_item sum, input;
  std::cout << "Please input a list of sales item with same ISBN:" << std::endl;
  if (std::cin >> sum) {
    while (std::cin >> input) {
      sum += input;
      if (input.isbn() != sum.isbn()) {
        std::cout << "Data must refer to same ISBN!";
      }
    }
    std::cout << sum << std::endl;
  } else {
    std::cout << "There is no data!" << std::endl;
  }
  return 0;
}
