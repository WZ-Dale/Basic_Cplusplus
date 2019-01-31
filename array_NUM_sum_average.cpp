#include <iostream>

int main(){
  const unsigned int NUM = 5;
  int arr[NUM] = {0};
  int sum = 0;
  double average = 0;
  std::cout << "请输入" << NUM << "个整数:" << std::endl;
  for(int i = 0; i < NUM; ++i){
    std::cout << "第" << i+1 << "个数:";
    while(!(std::cin >> arr[i])){           //正常输入,cin返回值为0
      std::cin.clear();
      std::cin.ignore(100,'\n');
      std::cout << "您的输入不合法,请重新输入:" << std::endl;
    }
    sum += arr[i];
  }
  average = sum/(double)NUM;
  std::cout << "累加和:sum = " << sum << std::endl;
  std::cout << "平均值:average = " << average << std::endl;
  return 0;
}

