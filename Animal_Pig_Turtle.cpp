#include <iostream>
#include <string>

class Animal{
  public:
    std::string mouth;

    void eat();
    void sleep();
    void drool();
};

class Pig : public Animal{
  public:
    void climb();
};

class Turtle : public Animal{
  public:
    void swim();
};


void Animal::eat(){
  std::cout << "我在吃饭,要不要给你分点...给..." << std::endl;
}

void Animal::sleep(){
  std::cout << "我在睡觉,请安静哦...嘘..." << std::endl;
}

void Animal::drool(){
  std::cout << "我在睡得很香,流口水了......" << std::endl;
}

void Pig::climb(){
  std::cout << "我是一只母猪,能够爬树的小母猪..." << std::endl;
}

void Turtle::swim(){
  std::cout << "我是一只乌龟,会游泳的小乌龟..." << std::endl;
}


int main(){
  Pig pig;
  Turtle turtle;

  pig.eat();
  turtle.eat();
  pig.climb();
  turtle.swim();

  return 0;
};
