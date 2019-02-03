#include <iostream>
#include <fstream>

struct nig{
  std::string name;
  std::string id;
  char gender;
};

bool Init_nig();
bool Read_nig();
void Record_nig();
bool Write_nig(nig *Date);

int main(){
  int i = 0;
  if(Init_nig()){
    std::cout << "初始化成功!" << std::endl;
    while(1){
      std::cout << "请输入需要进行的操作:" << std::endl;
      std::cout << "选项1.打印数据到屏幕" << std::endl;
      std::cout << "选项2.录入数据" << std::endl;
      std::cout << "选项3.退出程序" << std::endl;
      std::cin.clear();
      std::cin.sync();
      std::cin >> i;

      if(i == 1){
        if(Read_nig()){
          std::cout << "成功读取数据^o^" << std::endl;
          continue;
        }
        else{
          std::cout << "读取文件失败ToT" << std::endl;
          break;
        }
      }
      else if(i == 2){
        Record_nig();
        continue;
      }
      else if(i == 3){
        return 0;
      }
      else{
        std::cout << "您的输入不合法,请重新输入!" << std::endl;
        continue;
      }
    }
  }
  else{
    std::cout << "初始化失败ToT......" << std::endl;
    return 0;
  }
}

bool Init_nig(){
  std::ofstream out;
  out.open("n_i_g.txt");
  if(!out){
    std::cerr << "打开文件失败!" << std::endl;
    return 0;          
  }
  out << "姓名\tid\t性别" << std::endl;
  out << "张三\t11111\t男" << std::endl;
  out.close();
  return 1;
}

bool Read_nig(){
  std::ifstream in;
  in.open("n_i_g.txt");
  if(!in){
    std::cerr << "打开文件失败!" << std::endl;
    return 0;          
  }
  char x;
  while(in >> x){
    std::cout << x;
  }
  std::cout << std::endl;
  in.close();
  return 1;
}

void Record_nig(){  
  std::ofstream out;
  out.open("n_i_g.txt",std::ios::app);
  nig a;

  std::cout << "请输入姓名:";
  while(!(std::cin >> a.name)){
    std::cout << std::endl;
    std::cout << "您输入的姓名不正确,请重新输入:";
    std::cin.clear();
  }
  out << a.name;

  std::cout << "请输入id:";
  while(!(std::cin >> a.id)){
    std::cout << std::endl;
    std::cout << "您输入的id不正确,请重新输入:";
    std::cin.clear();
  }
  out << a.id;

  std::cout << "请输入性别:";
  while(!(std::cin >> a.gender)){
    std::cout << std::endl;
    std::cout << "您输入的性别不正确,请重新输入:";
    std::cin.clear();
  }
  out << a.gender << std::endl;

  out.close(); 
}

bool Write_nig(nig *Date){
  
}

