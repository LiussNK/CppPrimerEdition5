#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;

	// �������� : 4 4 4 4
	cout << a << " " << b << " " << c << " " << d << endl;

	return 0;
}
