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
	string s("some string");
	if (s.begin() != s.end())
	{
		auto it = s.begin();
		*it = toupper(*it);
	}
	cout << s << endl;		// Êä³ö Some string		

	s = "some string";
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;		// Êä³ö SOME string
	/*
	vector<int>::iterator it;
	string::iterator it2;

	vector<int>::const_iterator it3;
	string::const_iterator it4;

	vector<int> v;
	const vector<int> cv;
	auto it1 = v.begin();
	auto it2 = cv.begin();

	auto it3 = v.cbegin();
	*/
	vector<string> text = { "qwert", "asdfg", "zxcvb" };
	for (auto it = text.cbegin();
		it != text.cend() && !it->empty(); ++it)
		cout << *it << endl;

	return 0;
}

