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
	vector<int> v;
	int i;
	while (cin >> i)
		v.push_back(i);
	auto beg = v.begin();
	while (beg != v.end() && *beg >= 0)
		++beg;
	if (beg == v.end())
		// all the elements in v > 0
		;
}


