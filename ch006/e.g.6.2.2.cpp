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

bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs) {
	auto ret = s.size();
	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i) {
		if (s[i] == c) {
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}
	return ret;
}

int main() {
	string s = "Hello world!";
	string::size_type ctr = 0;
	auto index = find_char(s, 'o', ctr);

	cout << index << " " << ctr << endl;

	return 0;
}


