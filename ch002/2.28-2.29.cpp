#include <iostream>

using namespace std;

int main()
{
	// 2.28
	// 定义 int 型 变量 i, int 指针常量 cp
	int i, *const cp;
	// 定义 int 指针 p1, int 指针常量 p2
	int *p1, *const p2;
	// 定义 int 常量 ic, 常量 ic 的引用 r
	const int ic, &r = ic;
	// 定义 指向 int 常量对象 的 int 常量指针
	const int *const p3;
	// 定义 常量指针 p
	const int *p;

	// 2.29
	i = ic;
	p1 = p3;
	p1 = &ic;
	p3 = &ic;
	p2 = p1;
	ic = *p3;

	return 0;
}
