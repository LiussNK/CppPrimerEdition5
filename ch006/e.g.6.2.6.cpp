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

struct ErrCode {
	ErrCode(int i) : num(i) {}  // initializes objects of type ErrCode
	string msg()                 // member function of ErrCode
	{
		ostringstream s; s << "ErrCode " << num; return s.str();
	}
	int num;  // data member, note uninitialized
};

void error_msg(initializer_list<string> il) {
	for (auto beg = il.begin(); beg != il.end(); ++beg)
		cout << *beg << " ";
	cout << endl;
};

void error_msg(ErrCode e, initializer_list<string> il) {
	cout << e.msg() << ":";
	for (const auto &elem : il)
		cout << elem << " ";
	cout << endl;
}

int main(int argc, char *argv[]) {
	string expected = "expected", actual = "actual";
	if (expected != actual)
		error_msg({ "functionX", expected, actual });
	else
		error_msg({ "functionX", "okay" });

	if (expected != actual)
		error_msg(ErrCode(42), { "functionX", expected, actual });
	else
		error_msg(ErrCode(0), { "functionX", "okay" });

	return 0;
}


