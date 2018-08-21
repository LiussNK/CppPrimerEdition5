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

inline const string & shorterString(const string & s1, const string & s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}

constexpr int new_sz() {
	return 42;
}
constexpr int foo = new_sz();
constexpr size_t scale(size_t cnt) {
	return new_sz() * cnt;
}

int main(int argc, char *argv[]) {
	cout << shorterString("a", "b") << endl;
	cout << scale(1) << endl;
	return 0;
}


