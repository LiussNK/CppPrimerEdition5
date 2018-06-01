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
	vector<string> text = {
		"",
		""
	};
	for (const auto &s : text) {
		cout << s;
		if (s.empty() || s[s.size() - 1] == '.')
			cout << endl;
		else {
			cout << " ";
		}
	}

	vector<int>vec;
	if (!vec.empty())
		cout << vec[0];

	int i = 0, j = 1, k = 2;
	if (i < j < k)				// 若 k 大于 ( i < j true 为 1 false 为 0 )
		cout << "i < j < k" << endl;

	return 0;
}


