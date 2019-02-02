#include <iostream>

void print(int *p_begin, int *p_end){
  while(p_begin != p_end){
    std::cout << *p_begin;
    ++p_begin;
  }
}

void print(char *p_begin, char *p_end){
  while(p_begin != p_end){
    std::cout << *p_begin;
    ++p_begin;
  }
}

int main(){
  
  int num[5] = {1,2,3,4,5};
  char name[7] = {'w','a','n','g',' ','z','e'};
  char ch[] = "wangze";  
  std::cout << ch << std::endl;
  print(num,num+5);
  std::cout << '\n';
  
  print(name,name+7);
  std::cout << '\n';
  
  return 0;
}
