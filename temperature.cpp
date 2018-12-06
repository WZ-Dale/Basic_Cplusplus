#include <iostream>

int main()
{
	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0 / 5.0;
	double temp_in,temp_out;
	char type_in,type_out;

	std::cout << "请您输入一个温度(输入格式为 xx.x C 或者 xx.x F):";
	std::cin >> temp_in >> type_in;
	std::cin.ignore(100,'\n');			//清除键盘缓冲区

	if(type_in == 'C' || type_in == 'c')
	{
		temp_out = temp_in * RATIO + ADD_SUBTRACT;
		type_in = 'C';
		type_out = 'F';
	}
	else if(type_in == 'F' || type_in == 'f')
	{
		temp_out = (temp_in - ADD_SUBTRACT) / RATIO;
		type_in = 'F';
		type_out = 'C';
	}
	else
	{
		std::cout << "你输入的不正确!" << '\n';
		return 0;
	}
	std::cout << "温度转换为:" << temp_in << type_in << " = " << temp_out << type_out << '\n';
	std::cout << "输入任何字符结束!" << '\n';
	std::cin.get();
	return 0;
}
