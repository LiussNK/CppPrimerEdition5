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
	for (decltype(ivec.size()) ix = 1; ix < ivec.size(); ++ix)
	{
		cout << ivec[ix - 1] + ivec[ix] << " ";
	}
	cout << endl;

	for (decltype(ivec.size()) ix = 0; ix < ivec.size(); ++ix)
	{
		cout << ivec[ix] + ivec[ivec.size() - 1 - ix] << " ";
	}

	return 0;
}

