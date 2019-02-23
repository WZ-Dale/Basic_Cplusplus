#include <iostream>
#include <string>


class Lovers{
  public:
    Lovers(std::string theName);
    void kiss(Lovers *lover);
    void ask(Lovers *lover, std::string something);

  protected:
    std::string name;

    friend class Others;      //友缘关系,交友不慎
    //友缘关系可以放在任何地方
};

class Boyfriend : public Lovers{
  public:
    Boyfriend(std::string theName);
};

class Girlfriend : public Lovers{
  public:
    Girlfriend(std::string theName);
};

class Others{
  public:
    Others(std::string theName);

    void kiss(Lovers *lover);

  protected:
    std::string name;
};


Lovers::Lovers(std::string theName){
  name = theName;
}
void Lovers::kiss(Lovers *lover){
  std::cout << name << " kiss my " << lover->name << std::endl;
}
void Lovers::ask(Lovers *lover, std::string something){
  std::cout << "lover " << lover->name << " help me " << something << std::endl;
}


Boyfriend::Boyfriend(std::string theName) : Lovers(theName){
 
}
Girlfriend::Girlfriend(std::string theName) : Lovers(theName){

}
Others::Others(std::string theName){
  name = theName;
}

void Others::kiss(Lovers *lover){
  std::cout << "\n哒哒哒哒!! 传说中的 " << name << " 登场." << std::endl;
  std::cout << name << " kiss your " << lover->name << "." << std::endl;
}


int main(){
  Boyfriend boyfriend("A君");
  Girlfriend girlfriend("B妞");
  
  Others others("路人甲");

  boyfriend.kiss(&girlfriend);
  boyfriend.ask(&girlfriend, "wish my hands.");

  girlfriend.kiss(&boyfriend);
  girlfriend.ask(&boyfriend,"wish my feet.");

  others.kiss(&girlfriend);

  return 0;
}
