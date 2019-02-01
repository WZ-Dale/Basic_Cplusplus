#include <iostream>

int main(){
  int a = 123;
  double b = 3.1415926;
  char c = 'c';
  unsigned long d = 19880808;
  std::string e = "I love you!";

  std::cout << "a的值是:" << a << std::endl;
  std::cout << "b的值是:" << b << std::endl;
  std::cout << "c的值是:" << c << std::endl;
  std::cout << "d的值是:" << d << std::endl;
  std::cout << "e的值是:" << e << std::endl;
  std::cout << '\n';
  int *a_pointer = &a;
  double *b_pointer = &b;
  char *c_pointer = &c;
  unsigned long *d_pointer = &d;
  std::string *e_pointer = &e;

  *a_pointer = 456;
  *b_pointer = 3.14;
  *c_pointer = 'C';
  *d_pointer = 20111124;
  *e_pointer = "I love Beauty!";

  std::cout << "a的值是:" << a << std::endl;
  std::cout << "b的值是:" << b << std::endl;
  std::cout << "c的值是:" << c << std::endl;
  std::cout << "d的值是:" << d << std::endl;
  std::cout << "e的值是:" << e << std::endl;

  return 0;
}
