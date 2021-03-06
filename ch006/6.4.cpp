#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::invalid_argument;

int fact(int val) {
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main() {
	int v;
	cout << "Please input a number > 0:";
	cin >> v;
	cout << v << "! is " << fact(v) << endl;

	return 0;
}


