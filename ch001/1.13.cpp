#include <iostream>
int main()
{
	// 1.9
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
		sum += i;		// µÈ¼ÛÓÚ sum = sum + val
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;

	// 1.10
	for (int i = 10; i >= 0; --i)
		std::cout << i << " ";
	std::cout << std::endl;

	// 1.11
	int v1 = 0, v2 = 0;
	std::cout << "Please enter 2 numbers : " << std::endl;
	std::cin >> v1 >> v2;
	for (; v1 <= v2; ++v1)
		std::cout << v1 << " ";
	std::cout << std::endl;

	return 0;
}
