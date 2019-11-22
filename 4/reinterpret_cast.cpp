#include <iostream>

using namespace std;

int main(){
    int a = 65;
    int *ip = &a;
    char *pc = reinterpret_cast<char*>(ip);
    cout << a << endl;
    cout << *ip << endl;
    cout << *pc << endl;

    return 0;
}