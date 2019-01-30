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
  std::cout << "请输入一个参数(输出平方),两个参数(输出积),三个参数(输出和):" << std::endl;
  std::cin >> a;
  calc(a);
  std::cin >> a >> b;
  calc(a,b);
  std::cin >> a >> b >> c;
  calc(a,b,c);
  return 0;
}
