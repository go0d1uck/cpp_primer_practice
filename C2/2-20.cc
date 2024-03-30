int main(int argc, char *argv[]) {
  int i = 42;   // 创建对象i,并赋值42
  int *p1 = &i; // 将地址给p1
  *p1 = *p1 * *p1; // 将p1所指对象的值取出相乘，再放回p1所指的对象中
  return 0;
}
