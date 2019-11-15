#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char ca1[] = "a bc!";
    char ca2[] = "a bcd!";

    cout << strlen(ca1) << endl;//5     //不算空字符
    cout << strlen(ca2) << endl;//6

    cout << sizeof(ca1) << endl;//6     //包括空字符
    cout << sizeof(ca2) << endl;//7

    return 0;
}