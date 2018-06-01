#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;

	// 输出结果是 : 3 4 3 3
	cout << a << " " << b << " " << c << " " << d << endl;

	a = 5;

	// 输出结果是 : 5 4 3 5
	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}
