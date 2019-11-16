#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "a bc!";

    cout << s << endl;                      //string对象的末尾没有空字符
    cout << s.c_str() << endl;              //c_str()的末尾是有空字符的
    cout << s.size() << endl;
    cout << sizeof(s.c_str()) << endl;      //8     //s.c_str()---指向字符数组的指针
    cout << sizeof(*(s.c_str())) << endl;   //1     //*(s.c_str())---字符数组的首元素的
    
    return 0;
}