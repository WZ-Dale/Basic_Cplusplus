#include <iostream>

int main(){
  const unsigned int NUM = 5;
  int int_array[NUM] = {1,2,3,4,5};
  char char_array[NUM] = {'I','l','o','v','e'};

  int *int_pointer = int_array;
  char *char_pointer = char_array;

  std::cout << "整数数组输出为:" << std::endl;
  for(int i = 0; i < NUM; ++i){
    std::cout << *int_pointer << "  地址为: " << reinterpret_cast<unsigned long>(int_pointer) << std::endl;
    int_pointer++;
  }
  
  std::cout << "字符数组输出为:" << std::endl;
  for(int i = 0; i < NUM; ++i){
    std::cout << *char_pointer << "  地址为: " << reinterpret_cast<unsigned long>(char_pointer) << std::endl;
    char_pointer++;
  }
  return 0;
}
