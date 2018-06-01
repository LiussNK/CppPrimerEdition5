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
	// 4.21
	vector<int> ivec(10);
	int in;
	for (int & i : ivec)
		if (cin >> in)
			i = in;

	for (int & i : ivec)
		i *= (i % 2 == 1 ? 2 : 1);

	for (int i : ivec)
		cout << i << " ";
	cout << endl;

	// 4.22
	unsigned grade;
	for (int i = 0; i < 5; i++) {
		cin >> grade;

		cout << "条件表达式" << endl;
		cout << (grade > 90 ? "high pass" : grade > 75 ? "low pass" : grade < 60 ? "fail" : "pass") << endl;

		cout << "if语句" << endl;
		if (grade > 90)
			cout << "high pass";
		else {
			if (grade > 75)
				cout << "low pass";
			else {
				if (grade < 60)
					cout << "fail";
				else {
					cout << "pass";
				}
			}
		}
		cout << endl;
	}

	// 4.23
	string s = "word";
	// string p1 = s + s[s.size() - 1] == 's' ? "" : "s"; // string == char
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");


	// 4.24
	//cout << grade <= 90 ? grade <= 75 ? grade < 60 ? "fail" : "pass" : "low pass" : "high pass";

	return 0;
}


