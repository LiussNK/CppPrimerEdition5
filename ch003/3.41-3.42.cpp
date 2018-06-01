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

int main()
{
	// 3.41
	int iar[] = { 1, 2, 3, 4 };
	vector<int> ivec(begin(iar), end(iar));
	for (int i : ivec)
		cout << i << " ";
	cout << endl;

	// 3.42
	vector<int> iv{ 1, 2, 3, 4, 5, 6 };
	int ia[100] = {};
	for (auto ix = iv.begin(); ix < iv.end(); ++ix)
		if (ix - iv.begin() < end(ia) - begin(ia))
			ia[ix - iv.begin()] = *ix;

	for (int *p = begin(ia); p != end(ia); ++p)
		cout << *p << " ";
	cout << endl;

	return 0;
}


