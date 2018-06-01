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
	vector<int> v2;
	for (int i = 0;i != 100;++i)
		v2.push_back(i);

	string word;
	vector<string> text;
	while (cin >> word)
	{
		text.push_back(word);
	}

	return 0;
}

