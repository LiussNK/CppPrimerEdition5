#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main()
{
	// 3.2
	/*string word;
	while (cin >> word)
	cout << word << endl;
	*/
	//string line;
	//while (getline(cin, line))
	//		cout << line << endl;

	// 3.3
	/*
	输入运算符遇到空白字符就停, getline 在遇到换行才停
	*/

	// 3.4
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 > s2)
		cout << s1 << endl;
	else
		cout << s2 << endl;

	cin >> s1 >> s2;
	auto len1 = s1.size();
	auto len2 = s2.size();
	if (len1 > len2)
		cout << s1 << endl;
	else
		cout << s2 << endl;

	// 3.5
	string w, l;
	while (cin >> w)
		if (!w.empty())
		{
			// l += w;
			l += w + " ";
			if (l.size() > 80)
			{
				cout << l << endl;
			}
		}

	return 0;
}

