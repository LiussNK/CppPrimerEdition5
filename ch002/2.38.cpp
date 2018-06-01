#include <iostream>

using namespace std;

int main()
{
	int a = 3;
	decltype(a) c = a;
	auto d = a;

	const int e = 4;
	decltype(e) f = e;
	auto g = e;

	return 0;
}
