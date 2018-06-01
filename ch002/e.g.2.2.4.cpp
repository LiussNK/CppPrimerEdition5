#include <iostream>
// 该程序仅用于说明: 函数内部不宜定义与全局变量同名的新变量
int reused = 42;				// reused 拥有全局作用域
int main()
{
	int unique = 0;				// unique 拥有块作用域
								// 输出 #1: 使用全局变量 reused; 输出 42 0
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;				// 新建局部变量 reused, 覆盖了全局变量 reused
								// 输出 #2:  使用局部变量 reused; 输出 0 0
	std::cout << reused << " " << unique << std::endl;
	std::cout << ::reused << " " << unique << std::endl;
	return 0;
}
