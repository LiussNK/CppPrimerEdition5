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
	string s1, s2;
	do {
		cout << "Please input two strings: " << endl;
		cin >> s1 >> s2;
		cout << (s1.size() < s2.size() ? s1 : s2) << endl;
	} while (cin);

	return 0;
}


