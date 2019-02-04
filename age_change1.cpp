#include <iostream>

void change_age(int *age, int new_age){
  *age = new_age;
  std::cout << "In this,my age is " << *age << std::endl;
}

int main(){
  int age = 23;
  std::cout << "My age is " << age << std::endl;
  change_age(&age,age + 1);
  std::cout << "Now my age is " << age << std::endl;
  return 0;
}

