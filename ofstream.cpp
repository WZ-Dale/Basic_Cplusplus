#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ofstream out;

  out.open("1.txt");
  if(!out){
    cerr << "打开文件失败!" << endl;
    return 0;
  }

  for(int i = 0; i < 10; i++){
    out << i;
  }

  out << endl;
  out.close();
  return 0;
}
