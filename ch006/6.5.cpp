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

int abs(int val) {
	return val < 0 ? -val : val;
}

int main() {
	int i;
	cin >> i;
	cout << "|" << i << "| is " << abs(i) << endl;

	return 0;
}


