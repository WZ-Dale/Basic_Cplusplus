#include <iostream>

int main(){
  int arr[10] = {0};
  int sum = 0;
  double average = 0;
  std::cout << "请输入十个整数:" << std::endl;
  for(int i = 0; i < 10; ++i){
    std::cout << "\n" << "第" << i+1 << "个数:";
    std::cin >> arr[i];
    sum += arr[i];
  }
  average = sum/10.0;
  std::cout << "累加和:sum = " << sum << std::endl;
  std::cout << "平均值:average = " << average << std::endl;
  return 0;
}

