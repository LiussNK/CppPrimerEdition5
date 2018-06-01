#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstddef>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	// 4.10
	int i;
	while (cin >> i && i != 42)
		cout << i << " ";
	cout << endl;

	// 4.11
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a > b && b > c && c > d)
		cout << a << " > " << b << " > " << c << " > " << d << endl;

	return 0;
}


