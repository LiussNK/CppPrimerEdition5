#include <iostream>
int main()
{
	// 2.15
	// right ival = 1;
	int ival = 1.01;
	// wrong 非常量引用的初始值必须为左值
	// int &rval1 = 1.01;
	// right rval2 = ival;
	int &rval2 = ival;
	// wrong 引用 变量 "rval3" 需要初始值设定项
	// int &rval3;

	// 2.16
	// right
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;				// r2 = d = 3.14159
	std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
	r2 = r1;					// r2 = d = 0
	std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
	i = r2;						// r1 = i = 0
	std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;
	r1 = d;						// r1 = i = 0;
	std::cout << i << " " << r1 << " " << d << " " << r2 << std::endl;

	// 2.17
	i = 5; r1 = 10;
	std::cout << i << " " << r1 << " " << std::endl;


	return 0;
}
