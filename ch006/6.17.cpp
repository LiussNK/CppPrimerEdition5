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

bool has_upper(const string &s) {
	for (auto ch : s)
		if (isupper(ch))
			return true;
	return false;
}

void to_lower(string &s) {
	for (auto &ch : s)
		ch = tolower(ch);
}

int main() {
	cout << has_upper("Hello World!") << endl;
	// to_lower("Hello World!");

	const string cs = "Hello World!";
	cout << has_upper(cs) << endl;
	// to_lower(cs);

	string s = "Hello World!";
	cout << has_upper(s) << endl;
	to_lower(s);
	cout << s << endl;

	return 0;
}


