#include <iostream>

using namespace std;

int main(){
    int x = 2;
    switch(x){
        case 1:
            {                       // 如果需要在case中的定义并初始化一个变量，应该把其定义在块内，从而确保后面的所有case标签都在作用域之外
                int i = 1;
                int j;
                cout << "case 1: " << i << endl;
            }
            break;
        case 2:
            cout << "case 2: " << 2 << endl;
            break;
    }
}
