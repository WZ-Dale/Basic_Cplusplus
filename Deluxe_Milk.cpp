#include <iostream>
#include <string>
#include <fstream>

class StoreQuote{
  public:
    std::string quote, speaker;
    std::ofstream fileOutput;

    StoreQuote();
    ~StoreQuote();

    void inputQuote();
    void inputSpeaker();
    bool read();
    bool write();
};

StoreQuote::StoreQuote(){
  fileOutput.open("test.txt", std::ios::app);
  //fileOutput.open("test.txt",std::ios::in | std::ios::app);
}


StoreQuote::~StoreQuote(){
  fileOutput.close();
}

void StoreQuote::inputQuote(){
  std::getline(std::cin, quote);
}

void StoreQuote::inputSpeaker(){
  std::getline(std::cin, speaker);
}

//bool StoreQuote::read(){
//  fileOutput.is_open();
//  if(!fileOutput){
//    std::cerr << "打开文件失败!" << std::endl;
//    return 0;          
//  }
//  char x;
//  while(fileOutput >> x){
//    std::cout << x;        
//  }
//  std::cout << std::endl;
//  return 0;
//}

bool StoreQuote::write(){
  if(fileOutput.is_open()){
    fileOutput << quote << "|" << speaker << std::endl;
    return true;
  }
  else{
    return false;
  }
}

int main(){
  StoreQuote quote;

  std::cout << "请输入一句名言:" << std::endl;
  quote.inputQuote();

  std::cout << "请输入作者:" << std::endl;
  quote.inputSpeaker();

  if(quote.write()){
    std::cout << "写入文件成功^o^" << std::endl;
  }
  else{
    std::cout << "写入文件失败ToT" << std::endl;
    return 1;
  }
  return 0;
}
