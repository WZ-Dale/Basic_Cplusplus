#include <fstream>
#include <iostream>
using namespace std;

int main(){
  ifstream in;

  in.open("1.txt");
  if(!in){
    cerr << "打开文件失败!" << endl;
    return 0;
  }

  char x;
  while(in >> x){
    cout << x;
  }
  cout << endl;
  return 0;
}
