#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	int sum = 0;
	for (int i = 0; i <= 10; ++i)
		sum += i;
	cout << sum << endl;

	sum = 0;
	int i = 0;
	while (i <= 10) {
		sum += i;
		++i;
	}
	cout << sum << endl;

	sum = 0;
	int input;
	while (cin >> input)
		sum += input;
	cout << sum << endl;

	sum = 0;
	for (int input = 0;;)
		if (cin >> input)
			sum += input;
		else
			break;
	cout << sum << endl;

	return 0;
}


