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
	const vector<string> scores = { "F", "D", "c", "b", "A", "A++" };
	string lettergrade;
	int grade;
	if (grade < 60)
		lettergrade = scores[0];
	else {
		lettergrade = scores[(grade - 50) / 10];
		if (grade != 100)
			if (grade % 10 > 7)
				lettergrade += '+';
			else if (grade % 10 < 3)
				lettergrade += '-';
	}
}


