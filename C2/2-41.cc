#include <iostream>
#include <ostream>
#include <string>

struct Sales_data {
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
  double price = 0.0;
};

int main() {
  Sales_data d1, d2;
  std::cin >> d1.bookNo >> d1.units_sold >> d1.price;
  std::cin >> d2.bookNo >> d2.units_sold >> d2.price;
  if (d1.bookNo == d2.bookNo) {
    std::cout << "";
  } else {
    std::cout << "there need two sample sales id" << std::endl;
  }
}