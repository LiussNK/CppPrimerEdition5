#include <iostream>
int main()
{
	// 1.9
	int sum = 0, val = 50;
	// ֻҪ val ��ֵС�ڵ��� 100 , while ѭ���ͻ����ִ��
	while (val <= 100) {
		sum += val;		// �� sum + val ���� sum
		++val;			// �� val �� 1
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
