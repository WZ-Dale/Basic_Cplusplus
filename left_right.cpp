#include <iostream>
#include <math.h>
#include <iomanip>

int main(){
	while (1){
		double a = 0.0, b = 0.0;
		std::cout << "请输入一个浮点数: ";
		std::cin >> a;
		std::cout << "请输入一个浮点偏差: ";
		std::cin >> b;
		std::cout << std::fixed << std::setprecision(5) << a - b << "  --  " << a + b << "\n" << std::endl;
	}
	system("pause");
	return 0;
}
