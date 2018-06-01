#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstddef>
#include <cstring>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	/*vector<int> ivec(10);
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0;
	ix != ivec.size(); ++ix, --cnt)
	ivec[ix] = cnt;
	for (int i : ivec)
	cout << i << " ";
	cout << endl;*/

	vector<int> ivec(10);
	vector<int>::size_type cnt = ivec.size();
	for (vector<int>::size_type ix = 0;
		ix != ivec.size(); ix++, cnt--)
		ivec[ix] = cnt;
	for (int i : ivec)
		cout << i << " ";
	cout << endl;

	return 0;
}


