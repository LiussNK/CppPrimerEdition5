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
	// 4.4
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl; // 输出结果为 91

													  // 4.5
	cout << -30 * 3 + 21 / 5 << endl; // 输出结果为 -86
	cout << -30 + 3 * 21 / 5 << endl; // 输出结果为 -18
	cout << 30 / 3 * 21 % 5 << endl; // 输出结果为 0
	cout << -30 / 3 * 21 % 4 << endl; // 输出结果为 -2

									  // 4.6
	int i;
	cin >> i;
	if (i % 2 == 1)
		cout << i << "是个奇数" << endl;
	else {
		cout << i << "是个偶数" << endl;
	}

	// 4.7
	int ii = 2147483647;
	long long l = 0;

	l = ii;
	cout << "预期 " << l + 1 << endl;
	ii = ii + 1;
	cout << "结果 " << ii << endl;

	l = ii;
	cout << "预期 " << -l << endl;
	ii = -ii;
	cout << "结果 " << ii << endl;

	l = ii;
	cout << "预期 " << l - 1 << endl;
	ii = ii - 1;
	cout << "结果 " << ii << endl;

	return 0;
}


