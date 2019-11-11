#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a = 1, b = 2;
    double c = 11.456;
    decltype(add(a, b)) sum = c;
    cout << sum << endl;
    return 0;
}
