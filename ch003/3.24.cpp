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
	int i;
	vector<int> ivec;
	while (cin >> i)
	{
		ivec.push_back(i);
	}
	for (auto it = ivec.begin() + 1; it < ivec.end(); ++it)
	{
		cout << (*it - 1) + *it << " ";
	}
	cout << endl;

	for (auto it = ivec.begin(); it < ivec.end(); ++it)
	{
		cout << (*it) + *(ivec.end() - 1 - (it - ivec.begin())) << " ";
	}

	return 0;
}

