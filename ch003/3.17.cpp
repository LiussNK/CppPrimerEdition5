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
	string word;
	vector<string> v;
	while (cin >> word && v.size() < 10)
	{
		v.push_back(word);
	}
	for (string &w : v)
	{
		for (char &c : w)
		{
			c = toupper(c);
		}
	}

	for (string &w : v)
		cout << w << endl;

	return 0;
}

