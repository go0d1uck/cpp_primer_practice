#include "Sales_item.h"
#include <iostream>
#include <map>

int main(int argc, char *argv[]) {
  Sales_item input;
  std::map<decltype(input.isbn()), unsigned int> isbn2cnt;
  if (std::cin >> input) {
    isbn2cnt[input.isbn()]++;
    while (std::cin >> input) {
      isbn2cnt[input.isbn()]++;
    }
  } else {
    std::cout << "There is no data";
    return -1;
  }
  std::cout << "ISBN\t\t\trecords\n";
  for (const auto &pair : isbn2cnt) {
    std::cout << pair.first << "\t\t" << pair.second << std::endl;
  }
  return 0;
}
