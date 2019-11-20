#include <iostream>

using namespace std;

int main(){
    char c = 'a';

    char *p = &c;
    const char *cp = &c;

    cout << c << endl;
    cout << *p << endl;
    cout << *cp << endl;

    return 0;
}