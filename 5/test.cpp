#include <iostream>

using namespace std;

int main(){
    int i = 3;
    if(i > 0)           // 只是为了验证if语句的执行流，虽然这样写的代码我看不惯，很难受
        if(i < 2)       // 在这里，虽然代码块没有加花括号{}，但下面的else依然匹配的是该处的if
            i += 10;
        else if(i >= 2)
            i -= 10;
    cout << i << endl;
    return 0;
}