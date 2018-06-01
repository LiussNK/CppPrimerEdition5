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
	vector<int> vi(10);
	auto it = vi.begin();
	while (it != vi.end())
	{
		cin >> *it;
		++it;
	}
	it = vi.begin();
	while (it != vi.end())
	{
		*it = 2 * (*it);
		++it;
	}
	auto ct = vi.cbegin();
	while (ct != vi.cend())
	{
		cout << *ct << " ";
		++ct;
	}

	return 0;
}

