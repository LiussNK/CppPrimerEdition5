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
	vector<string> v;
	string input, lastinput;
	while (cin >> input) {
		if (input == lastinput) {
			cout << "Repeating word: " << input << endl;
			break;
		}
		v.push_back(input);
		lastinput = input;
	}
	if (input != lastinput)
		cout << "No two repeating words" << endl;

	return 0;
}


