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
	vector<string> text = { "qwert", "asdfg", "zxcvb" };
	auto it = text.begin();
	if (it != text.end() && !it->empty())
	{
		for (auto &c : *it)
			c = toupper(c);
		cout << *it << endl;
	}

	return 0;
}

