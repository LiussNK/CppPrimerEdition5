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
	vector<int> ivec1{ 1, 2, 3, 5 }, ivec2{ 1, 2, 3, 4, 5, 6 };
	auto sz = ivec1.size();
	if (ivec2.size() < sz)
		sz = ivec2.size();
	bool b = true;
	for (decltype(sz) i = 0; i < sz; ++i) {
		if (ivec1[i] != ivec2[i]) {
			b = false;
			break;
		}
	}
	cout << (b ? "TRUE" : "FALSE") << endl;

	return 0;
}


