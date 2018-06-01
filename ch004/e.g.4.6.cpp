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
	string s1 = "a string", *p = &s1;
	auto n = s1.size();
	n = (*p).size();
	n = p->size();
	s1++;
	cout << s1;


	return 0;
}


