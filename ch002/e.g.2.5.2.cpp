#include <iostream>

using namespace std;

int main()
{
	int val1 = 0;
	double val2 = 0.1;

	auto sum = val1 + val2;

	cout << sum << endl; // ������Ϊ 0.1

	auto i = 0, *p = &i;
	auto sz = 0, pi = 3.14; // ���ڴ�ʵ�塰auto�������� "double"����֮ǰĬʾΪ "int"

	int i = 0, &r = i;
	auto a = r;

	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	auto e = &ci;

	const auto f = ci;

	auto &g = ci;
	auto &h = 42;
	const auto &j = 42;

	auto k = ci, &l = i;
	auto &m = ci, *p = &ci;
	auto &n = i, *p2 = &ci;

	return 0;
}
