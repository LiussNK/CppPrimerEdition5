#include <iostream>
int main()
{
	int sum = 0, val = 1;
	// ֻҪ val ��ֵС�ڵ��� 10 , while ѭ���ͻ����ִ��
	while (val <= 10) {
		sum += val;		// �� sum + val ���� sum
		++val;			// �� val �� 1
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}