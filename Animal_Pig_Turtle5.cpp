#include <iostream>
#include <string>


class Animal{
  public:
    std::string mouth;
    std::string name;

    Animal(std::string theName);
    void eat();
    void sleep();
    void drool();
};

class Pig : public Animal{
  public:
    void climb();
    void eat(int eatcount);

    Pig(std::string theName);
};

class Turtle : public Animal{
  public:
    void swim();

    Turtle(std::string theName);
};


Animal::Animal(std::string theName){
  name = theName;
}
void Animal::eat(){
  std::cout << "我在吃饭,要不要给你分点..." << std::endl;
}
void Animal::sleep(){
  std::cout << "我在睡觉,请安静哦..." << std::endl;
}
void Animal::drool(){
  std::cout << "我在睡得很香,流口水了..." << std::endl;
}


Pig::Pig(std::string theName) : Animal(theName){
  //name = theName;
}
void Pig::climb(){
  std::cout << "我是一只母猪,能够爬树的小母猪..." << std::endl;
}
void Pig::eat(int eatcount){
  std::cout << "我吃了 " << eatcount << " 碗!" << std::endl;
}


Turtle::Turtle(std::string theName) : Animal(theName){
  //name = theName;
}
void Turtle::swim(){
  std::cout << "我是一只乌龟,会游泳的小乌龟..." << std::endl;
}


int main(){
  Pig pig("佩奇");
  Turtle turtle("爱德华");

  std::cout << "小猪的名字是: " << pig.name << std::endl;
  std::cout << "小乌龟的名字是: " << turtle.name << std::endl;
  pig.eat();              //从父类继承来的不能重载,只能覆盖
  turtle.eat();
  pig.eat(15);
  pig.climb();
  turtle.swim();

  return 0;
};
