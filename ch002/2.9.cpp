#include <iostream>
int main() {
	// std::cin >> int input_value;		// Ӧ��ʹ��ǰ����
	// int i = { 3.14 };				// �����ų�ʼ��( �б��ʼ�� )ʱ, double ת���� int �ж�ʧ��Ϣ�ķ���, ����������ͨ��
	// double salary = wage = 9999.99;	// double salary = wage; wage = 9999.99;
	double wage = 0;					// ��ȷ�ĸ�ֵ
	double salary = wage = 9999.99;
	int i1 = 3.14;						// int i1 = 3; .14��Ϣ��ʧ

	std::cout << wage << '\t' << salary << '\t' << i1 << std::endl;

	return 0;
}
