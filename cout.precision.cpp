#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(){
	double result = sqrt(3.0);

	cout << "对3开方保留小数点后0-9位,结果如下:"<< endl;

	for (int i = 0; i <= 9; i++){
		cout.precision(i);
		cout << result << endl;
		cout << "当前输出精度为:" << cout.precision() << endl;
	}
	system("pause");
	return 0;
}
