#include <iostream>

using namespace std;

int main(){
    char c[] = "abc";

    char (*p)[4] = &c;
    const char (*cp)[4] = &c;

    cout << c << endl;
    cout << *p << endl;
    cout << *cp << endl;

    char ch = 'a';
    const char *pc = &ch;
    char *pp = const_cast<char*>(pc);
    cout << ch << endl;
    cout << *pc << endl;
    cout << *pp << endl;



    return 0;
}