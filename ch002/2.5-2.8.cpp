#include <iostream>
int main() {
	// 2.5
	std::cout << 'a' << std::endl;		// �ַ�
	std::cout << L'a' << std::endl;		// ���ַ�������ֵ, ������ wchar_t
	std::cout << "a" << std::endl;		// �ַ��� 'a''\0'
	std::cout << L"a" << std::endl;
	std::cout << 10 << std::endl;		// int
	std::cout << 10u << std::endl;		// unsigned
	std::cout << 10L << std::endl;		// long
	std::cout << 10uL << std::endl;		// unsigned long
	std::cout << 012 << std::endl;		// �˽��� 10
	std::cout << 0xC << std::endl;		// ʮ������ 12
	std::cout << 3.14 << std::endl;		// double float
	std::cout << 3.14f << std::endl;	// float
	std::cout << 3.14L << std::endl;	// long double
	std::cout << 10 << std::endl;		// int
	std::cout << 10u << std::endl;		// unsigned int
	std::cout << 10. << std::endl;		// double float
	std::cout << 10e-2 << std::endl;	// double float 10 * 10 ^ (-2)

										// 2.6
	int month = 9, day = 7;		// int 9 7
								// int month = 09, day = 07;	// ��Ч�İ˽������� int 7

								// 2.7
	std::cout << "Who goes with F\145rgus?\012" << std::endl;	// e ����
	std::cout << 3.14e1L << std::endl;	// long double 3.14 * 10 ^ 1
										//std::cout << 1024f << std::endl;	// 1024 ����
	std::cout << 3.14L << std::endl;	// ong double

										// 2.8
	std::cout << '\062' << '\115' << '\012';
	std::cout << '\x32' << '\x4D' << '\xa';
	std::cout << '\062' << '\011' << '\115' << '\012';
	std::cout << '\x32' << '\x9' << '\x4D' << '\xa';

	return 0;
}
