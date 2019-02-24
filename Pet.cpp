#include <iostream>
#include <string>

class Pet{
  public:
    Pet(std::string thName);
    ~Pet();

    static int getCount();

  protected:
    std::string name;

  private:
    static int count;
};

class Dog : public Pet{
  public:
    Dog(std::string theName);
};

class Cat : public Pet{
  public:
    Cat(std::string theName);
};

int Pet::count = 0;       //该语句做了两件事,分配内存并初始化

Pet::Pet(std::string theName){
  name = theName;
  count++;
  std::cout << "一只Pet出生了,名字是: " << name << std::endl;
}
Pet::~Pet(){
  count--;
  std::cout << name << "挂掉了" << std::endl;
}
int Pet::getCount(){
  return count;
}

Dog::Dog(std::string theName) : Pet(theName){

}
Cat::Cat(std::string theName) : Pet(theName){

}


int main(){
  Dog dog("旺财");
  Cat cat("Tom");
  std::cout << "已经诞生了 " << Pet::getCount() << " 只Pet!\n" << std::endl;//2只

  {
    Dog dog_1("旺财_1");
    Cat cat_1("Tom_1");
    std::cout << "Now,已经诞生了 " << Pet::getCount() << " 只Pet!\n" << std::endl;//4只
  }//2只
  
  std::cout << "如今,只剩下 " << Pet::getCount() << " 只Pet!\n" << std::endl;//有大括号为2只,无大括号为4只
  return 0;
}
