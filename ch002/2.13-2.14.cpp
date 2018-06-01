#include <iostream>
int main()
{
	// 2.13
	int i = 100;
	int j = i;
	std::cout << i << " " << j << std::endl;

	// 2.14
	int sum = 0;
	for (int i = 0; i != 10; ++i)
		sum += i;
	std::cout << i << " " << sum << std::endl;
	return 0;
}
