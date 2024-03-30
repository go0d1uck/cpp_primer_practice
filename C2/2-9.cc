#include <iostream>

int main(int argc, char *argv[]) {
  // std::cin >> int input_value; 定义一个值的返回并不是这个值，所以不可以作为右操作数。
  //修改如下
  int input_value;
  std::cin >> input_value;
  // int i = { 3.14 };存在数据丢失
  // 修改如下
  double i = { 3.14 };
  // double salary = wage = 9999.99;不可以连续初始化
  // 修改如下
  double salary,wage;
  salary=wage=9999.99;
  int j = 3.14;//存在数据丢失但是并不非法。
  return 0;
}
