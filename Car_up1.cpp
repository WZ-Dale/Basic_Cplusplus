#include <iostream>
#include <unistd.h>

#define FULL_GAS 100 

class Car{
public:
  std::string color;
  std::string engine;
  unsigned int gas_tank;
  unsigned int wheel;
  
  Car(void);
  void setColor(std::string col);
  void setEngine(std::string eng);
  void setWheel(unsigned int whe);
  void fillTank(unsigned liter);
  int running(void);
  void warning(void);
};

Car::Car(void){
  color = "BLANK";
  engine = "V10";
  wheel = 4;
  gas_tank = FULL_GAS;              //汽车初始状态
}

void Car::setColor(std::string col){      //颜色设置
  color = col;
}

void Car::setEngine(std::string eng){     //设置引擎
  engine = eng;
}

void Car::setWheel(unsigned int whe){     //设置轮子数
  wheel = whe;
}

void Car::fillTank(unsigned int liter){   //加油到油箱
  gas_tank += liter;
}

int Car::running(void){                   //汽车跑起来
  std::cout << "正以120的时速往前行驶!  翻过那山,越过那岭......" << std::endl;
  gas_tank--;
  if(gas_tank < 10){
    warning();
    std::cout << "请问是否需要加满油再行驶?(Y/N)" << std::endl;
    char i;
    std::cin >> i;
    if('Y' == i || 'y' == i){
    fillTank(FULL_GAS);
    }
    if(0 == gas_tank){
    std::cout << "动力不足,车跑不动了!!!" << std::endl;
    return 1;
    }
  } 
  else{
    std::cout << "当前还剩 " << 100*gas_tank/FULL_GAS << "% 油量!" << std::endl;
  }
  return 0;
}

void Car::warning(void){                  //油少警告
  std::cout << "WARNING!! 还剩 " << 100*gas_tank/FULL_GAS << "% 油量!!" << std::endl;
}

int main(){
  Car mycar;

  while(!mycar.running()){
    //sleep(1);
  }
  return 0;
}
