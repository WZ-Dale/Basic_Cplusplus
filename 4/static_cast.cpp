#include <iostream>

using namespace std;

int main(){
    double d = 10.345;

    double *dp = &d;
    cout << dp << '\t' << *dp << endl;

    void *p = &d;           //以void*的视角来看这仅仅是内存空间，没有办法访问到该内存空间中所存的对象
    cout << p << endl;      //此时*p已无法解引用，void*不能解引用，因为不清楚地址中的这个对象是什么类型

    double *ddp = static_cast<double*>(p);  //但可以使用static_cast找回存在于void*指针中的值
    cout << ddp << '\t' << *ddp << endl; 
    
    int *ip = static_cast<int*>(p);         //以不同的方式理解内存中的值
    cout << ip << '\t' << *ip << endl; 

    float *fp = static_cast<float*>(p);     //以不同的方式理解内存中的值
    cout << fp << '\t' << *fp << endl; 

    double *dddp = static_cast<double*>(p);  //但可以使用static_cast找回存在于void*指针中的值
    cout << dddp << '\t' << *dddp << endl;

    return 0;
}