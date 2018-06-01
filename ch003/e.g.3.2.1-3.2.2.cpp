#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

int main()
{
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c');

	string s;
	cin >> s;
	cout << s << endl;

	cin >> s1 >> s2;
	cout << s1 << s2 << endl;

	/*string word;
	while (cin >> word)
	cout << word << endl;
	*/
	//string line;
	//while (getline(cin, line))
	//	// if (!line.empty())
	//	if (line.size() > 80)
	//		cout << line << endl;

	string str = "Hello";
	string phrase = "Hello World";
	string slang = "Hiya";
	if (str < phrase)
		cout << str << " < " << phrase << endl;
	if (str < slang)
		cout << str << " < " << slang << endl;
	if (phrase < slang)
		cout << phrase << " < " << slang << endl;

	string st1(10, 'c'), st2;
	st1 = st2;

	s1 = "hello, ", s2 = "world\n";
	s3 = s1 + s2;
	s1 += s2;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;

	s4 = s1 + ", ";
	// string s5 = "hello" + ", ";
	string s5 = string("hello") + ", ";
	string s6 = s1 + ", " + "world";
	// string s7 = "hello" + ", " + s2;
	string s7 = "hello" + (", " + s2);

	return 0;
}

