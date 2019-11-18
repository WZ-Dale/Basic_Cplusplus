#include <iostream>

using namespace std;

int main(){
    bool a;             //1
    char b;             //1
    short c;            //2
    unsigned short d;   //2
    int e;              //4
    unsigned int f;     //4
    long g;             //4
    unsigned long h;    //4
    float i;            //4
    double j;           //8
    long long k;        //8
    long double l;      //16

    wchar_t m;          //2
    char16_t n;         //2
    char32_t o;         //4


    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(g) << endl;
    cout << sizeof(h) << endl;
    cout << sizeof(i) << endl;
    cout << sizeof(j) << endl;
    cout << sizeof(k) << endl;
    cout << sizeof(l) << endl;
    cout << sizeof(m) << endl;
    cout << sizeof(n) << endl;
    cout << sizeof(o) << endl;
    
    
    return 0;
}