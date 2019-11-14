#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 = "a bc!";
    string s2 = "a bcd!";

    cout << s1.size() << endl;//5
    cout << s2.size() << endl;//6

    cout << sizeof(s1) << endl;//32     //对象中不只有字符串，还有size和capacity
    cout << sizeof(s2) << endl;//32
    
    return 0;
}