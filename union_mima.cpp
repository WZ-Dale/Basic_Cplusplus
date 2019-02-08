#include <iostream>

union mima {
  unsigned long birthday;
  unsigned short ssn;
  char * pet;
};

int main(){
  mima code1;

  code1.birthday = 19960623;
  std::cout << code1.birthday << std::endl;

  code1.ssn = 3232;
  std::cout << code1.ssn << std::endl;
  std::cout << code1.birthday << std::endl;

  return 0;
}
