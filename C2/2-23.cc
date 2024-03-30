/*
 * 理论上来说是不可能的。
 * 对于nullptr的指针，我们显然可以知道这个指针是无效的。
 * 但是对于指针p中的其他值，我们显然不知道这个指针是否已经悬空
 * 举例如下
*/

#include <iostream>
#include <new>

int main (int argc, char *argv[]) {
  int *pi = new int(99);
  delete pi;//现在这个指针已经悬空了
  if(pi)
  {
    std::cout << "指针仍然不为nullptr\n";
    std::cout << *pi; // 此时访问就会得到错误的结果
  }
  return 0;
}
