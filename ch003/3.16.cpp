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
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	cout << "v1.size() = " << v1.size() << endl;
	for (decltype(v1.size()) ix = 0;ix < v1.size(); ++ix)
		cout << "v1[" << ix << "] = " << v1[ix] << endl;

	cout << "v2.size() = " << v2.size() << endl;
	for (decltype(v2.size()) ix = 0;ix < v2.size(); ++ix)
		cout << "v2[" << ix << "] = " << v2[ix] << endl;

	cout << "v3.size() = " << v3.size() << endl;
	for (decltype(v3.size()) ix = 0;ix < v3.size(); ++ix)
		cout << "v3[" << ix << "] = " << v3[ix] << endl;

	cout << "v4.size() = " << v4.size() << endl;
	for (decltype(v4.size()) ix = 0;ix < v4.size(); ++ix)
		cout << "v4[" << ix << "] = " << v4[ix] << endl;

	cout << "v5.size() = " << v5.size() << endl;
	for (decltype(v5.size()) ix = 0;ix < v5.size(); ++ix)
		cout << "v5[" << ix << "] = " << v5[ix] << endl;

	cout << "v6.size() = " << v6.size() << endl;
	for (decltype(v6.size()) ix = 0;ix < v6.size(); ++ix)
		cout << "v6[" << ix << "] = " << v6[ix] << endl;

	cout << "v7.size() = " << v7.size() << endl;
	for (decltype(v7.size()) ix = 0;ix < v7.size(); ++ix)
		cout << "v7[" << ix << "] = " << v7[ix] << endl;

	return 0;
}

