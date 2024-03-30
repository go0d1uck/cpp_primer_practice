// 有区别，前面是10进制，后面是8进制。
// 但是由于出现了数字9,已经超过了八进制，所以会编译报错。

int main(int argc, char *argv[]) {
  int month = 9, day = 7;
  int month_ = 09, day_ = 07;
  return 0;
}
