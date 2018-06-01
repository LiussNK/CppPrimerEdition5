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
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade)
	{
		if (grade <= 100)
			++(*(it + grade / 10));
	}
	for (auto i : scores)
		cout << i << " ";

	return 0;
}

