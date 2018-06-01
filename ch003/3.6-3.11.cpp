#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main()
{
	// 3.6
	string s("Hello World!!!");
	for (auto &c : s)
		c = 'X';
	cout << s << endl;

	// 3.7
	s = "Hello World";
	for (char c : s)
		c = 'X';
	cout << s << endl;

	// 3.8
	s = "Hello World";
	string::size_type index = 0;
	while (index < s.size())
	{
		auto &c = s[index];
		c = 'X';
		index = index + 1;
	}

	s = "Hello World";
	for (index = 0; index < s.size(); ++index)
	{
		auto &c = s[index];
		c = 'X';
	}

	// 3.9
	// string s;
	// cout << s[0] << endl; -- 不合法, s 空字符串

	// 3.10
	cin >> s;
	string result;
	for (auto c : s)
		if (!ispunct(c))
			result += c;
	cout << result;

	// 3.11
	/*const string cs = "Keep out!";
	for (auto &c : cs)
	c = 'X';		// c 常量引用
	cout << cs;*/

	return 0;
}

