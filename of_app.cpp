#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ofstream out("1.txt",ios::app);

  if(!out){
    cerr << "打开文件失败!" << endl;
    return 0;
  }

  for(int i = 10; i > 0; i--){
    out << i;
  }

  out << endl;
  out.close();
  return 0;
}
