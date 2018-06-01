#include <iostream>
#include <vector>
#include "Sales_item.h"
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9 };
	for (auto &i : v)
		i *= i;
	for (auto i : v)
		cout << i << " ";

	vector<unsigned> scores(11, 0);
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}

	vector<int> ivec;
	for (decltype(ivec.size()) ix = 0;ix != 10;++ix)
		// ivec[ix] = ix;
		ivec.push_back(ix);

	vector<int> ivec;
	// cout << ivec[0];

	vector<int> ivec2(10);
	// cout << ivec2[10];
	cout << ivec2[10 - 1];

	return 0;
}

