#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cstdlib>
using std::begin; using std::end;

#include <stdexcept>
using std::invalid_argument;

#include <initializer_list>
using std::initializer_list;

#include <sstream>
using std::ostringstream;

const string & shorterString(const string & s1, const string & s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2) {
	auto &r = shorterString(const_cast<const string &> (s1), const_cast<const string &>(s2));
	return const_cast<string&>(r);
}

int main(int argc, char *argv[]) {
	return 0;
}


