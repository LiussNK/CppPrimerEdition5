#include <iostream>
int main()
{
	// 1.9
	int sum = 0, val = 50;
	// 只要 val 的值小于等于 100 , while 循环就会持续执行
	while (val <= 100) {
		sum += val;		// 将 sum + val 赋予 sum
		++val;			// 将 val 加 1
	}
	std::cout << "Sum of 50 to 100 inclusive is "
		<< sum << std::endl;

	// 1.10
	int val0 = 10;
	while (val0 >= 0) {
		std::cout << val0 << " ";
		val0--;
	}
	std::cout << std::endl;

	// 1.11
	int v1 = 0, v2 = 0;
	std::cout << "Please enter 2 numbers : " << std::endl;
	std::cin >> v1 >> v2;
	while (v1 <= v2) {
		std::cout << v1 << " ";
		v1++;
	}
	std::cout << std::endl;

	return 0;
}
