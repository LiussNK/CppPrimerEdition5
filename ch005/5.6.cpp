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
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	string lettergrade;
	int grade;
	for (int i = 0; i < 20; i++) {
		cin >> grade;
		lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10] +
			(grade == 100 ? "" : grade % 10 > 7 ? "+" : grade % 10 < 3 ? "-" : "");
		cout << lettergrade << endl;
	}
}


