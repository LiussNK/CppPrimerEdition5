#include <iostream>

using namespace std;

int main()
{
	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;			// x 的类型是 const int
	decltype(cj) y = x;			// y 的类型是 const int&, y 绑定到变量 x
	decltype(cj) z = 0;				// 错误: z 是一个引用, 必须初始化

	int i = 42, *p = &i, &r = i;
	decltype(r + 0) b;
	decltype(*p) c = i;

	decltype((i)) d = i;
	decltype(i) e;

	return 0;
}
