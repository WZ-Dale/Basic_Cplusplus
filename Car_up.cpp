#include <iostream>
#include <unistd.h>

#define FULL_GAS 100 

class Car{
public:
  std::string color;
  std::string engine;
  unsigned int gas_tank;
  unsigned int wheel;
  
  void setColor(std::string col);
  void setEngine(std::string eng);
  void setWheel(unsigned int whe);
  void fillTank(unsigned liter);
  int running(void);
  void warning(void);
};

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
  std::cout << "当前还剩 " << 100*gas_tank/FULL_GAS << "% 油量!" << std::endl;
  return gas_tank;
}

void Car::warning(void){                  //油少警告
  std::cout << "WARNING!! 还剩 " << 100*gas_tank/FULL_GAS << "% 油量!!" << std::endl;
}

int main(){
  char i;
  Car mycar;

  mycar.setColor("BLANK");
  mycar.setEngine("V10");
  mycar.setWheel(4);
  mycar.gas_tank = FULL_GAS;              //汽车初始状态

  while(int j = mycar.running()){
    sleep(0.1);
    if(j < 10){
      mycar.warning();
      std::cout << "请问是否需要加满油再行驶?(Y/N)" << std::endl;
      std::cin >> i;
      if('Y' == i || 'y' == i){
        mycar.fillTank(FULL_GAS);
      }
      else{
        std::cout << "动力不足,车跑不动了!!!" << std::endl;
        return 0;
      }
    }
  }
  return 0;
}
