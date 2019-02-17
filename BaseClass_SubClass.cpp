#include <iostream>
#include <string>


class BaseClass{
  public:
    BaseClass();
    ~BaseClass();

    void doSomething();
};

class SubClass : public BaseClass{
  public:
    SubClass();
    ~SubClass();
};


BaseClass::BaseClass(){
  std::cout << "基类构造器\n" << std::endl;
}
BaseClass::~BaseClass(){
  std::cout << "基类析构器\n" << std::endl;
}
void BaseClass::doSomething(){
  std::cout << "基类的方法\n" << std::endl;
}

SubClass::SubClass(){
  std::cout << "子类构造器\n" << std::endl;
}
SubClass::~SubClass(){
  std::cout << "子类析构器\n" << std::endl;
}


int main(){
  SubClass subclass;
  subclass.doSomething();

  std::cout << "main\n" << std::endl;

  return 0;
}
