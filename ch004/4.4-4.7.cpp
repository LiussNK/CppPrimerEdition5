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
	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl; // ������Ϊ 91

													  // 4.5
	cout << -30 * 3 + 21 / 5 << endl; // ������Ϊ -86
	cout << -30 + 3 * 21 / 5 << endl; // ������Ϊ -18
	cout << 30 / 3 * 21 % 5 << endl; // ������Ϊ 0
	cout << -30 / 3 * 21 % 4 << endl; // ������Ϊ -2

									  // 4.6
	int i;
	cin >> i;
	if (i % 2 == 1)
		cout << i << "�Ǹ�����" << endl;
	else {
		cout << i << "�Ǹ�ż��" << endl;
	}

	// 4.7
	int ii = 2147483647;
	long long l = 0;

	l = ii;
	cout << "Ԥ�� " << l + 1 << endl;
	ii = ii + 1;
	cout << "��� " << ii << endl;

	l = ii;
	cout << "Ԥ�� " << -l << endl;
	ii = -ii;
	cout << "��� " << ii << endl;

	l = ii;
	cout << "Ԥ�� " << l - 1 << endl;
	ii = ii - 1;
	cout << "��� " << ii << endl;

	return 0;
}


