#include <iostream>
int main() {
	// std::cin >> int input_value;		// 应在使用前定义
	// int i = { 3.14 };				// 花括号初始化( 列表初始化 )时, double 转换到 int 有丢失信息的风险, 编译器不予通过
	// double salary = wage = 9999.99;	// double salary = wage; wage = 9999.99;
	double wage = 0;					// 正确的赋值
	double salary = wage = 9999.99;
	int i1 = 3.14;						// int i1 = 3; .14信息丢失

	std::cout << wage << '\t' << salary << '\t' << i1 << std::endl;

	return 0;
}
