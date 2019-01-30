#include <iostream>
#include <math.h>
void calc(double a){
  std::cout << pow(a,2) << std::endl;
}
void calc(double a,double b){
  std::cout << a * b << std::endl;
}
void calc(double a,double b,double c){
  std::cout << a + b + c << std::endl;
}

int main(){
  double a = 0.0,b = 0.0,c = 0.0;
  unsigned int i = 0;
  std::cout << "您要输入几个参数:" << std::endl;
  std::cin >> i;
  if(i == 0){
    std::cout << "您不需要输入任何参数!" << std::endl;
    return 0;
  }
  else if(i == 1){
    std::cout << "请输入一个参数(输出平方):" << std::endl;
    std::cin >> a;
    calc(a);
  }
  else if(i == 2){
    std::cout << "请输入两个参数(输出积):" << std::endl;
    std::cin >> a >> b;
    calc(a,b);
  }
  else if(i == 3){
    std::cout << "请输入三个参数(输出和):" << std::endl;
    std::cin >> a >> b >> c;
    calc(a,b,c);
  }
  else{
    std::cout << "参数个数不符合要求!" << std::endl;
  }
  return 0;
}
