#include <iostream>

using namespace std;

int main()
{
	const int i = 42;
	auto j = i; const auto &k = i; auto *p = &i;
	const auto j2 = i, &k2 = i;

	cout << i << " " << j << " " << k << endl
		<< p << " " << j2 << " " << k2 << endl;

	j = 0;
	k = 0;
	*p = 0;
	j2 = 0;
	k2 = 0;

	return 0;
}
