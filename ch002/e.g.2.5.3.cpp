#include <iostream>

using namespace std;

int main()
{
	const int ci = 0, &cj = ci;
	decltype(ci) x = 0;			// x �������� const int
	decltype(cj) y = x;			// y �������� const int&, y �󶨵����� x
	decltype(cj) z = 0;				// ����: z ��һ������, �����ʼ��

	int i = 42, *p = &i, &r = i;
	decltype(r + 0) b;
	decltype(*p) c = i;

	decltype((i)) d = i;
	decltype(i) e;

	return 0;
}
