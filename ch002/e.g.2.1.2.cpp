#include <iostream>
int main() {
	int i = 42;
	if (i)						// if ������ֵ��Ϊ true
	{
		std::cout << i << std::endl;
		i = 0;
		std::cout << i << std::endl;
	}

	unsigned u = 10;
	i = -42;
	std::cout << i + i << std::endl;	// ��� -84
	std::cout << u + i << std::endl;	// ��� int ռ 32 λ, ��� 4294967264

	u = -1;								// 4294967295
	std::cout << u << std::endl;

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;	// ��ȷ: ���  32
	std::cout << u2 - u1 << std::endl;	// ��ȷ: ����, �����ȡģ���ֵ

	u = 11;					// ȷ��Ҫ����������, �ӱ����� 1 ������ʼ
	while (u > 0) {
		--u;							// �ȼ� 1, �������һ�ε���ʱ�ͻ���� 0
		std::cout << u << std::endl;
	}
	return 0;
}
