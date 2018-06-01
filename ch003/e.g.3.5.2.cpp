#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

int main()
{
	unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
			++scores[grade / 10];
	}
	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	return 0;
}

