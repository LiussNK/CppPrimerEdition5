#include <iostream>

using namespace std;

int main()
{
	int ival = 1024;
	int *pi = &ival;		// pi ָ��һ�� int �͵���
	int **ppi = &pi;		// ppi ָ��һ�� int �͵�ָ��
	cout << "The value of ival\n"
		<< "direect value: " << ival << "\n"
		<< "indirect value: " << *pi << "\n"
		<< "doubly indirect value: " << **ppi
		<< endl;

	int i = 42;
	int *p;					// p ��һ�� int ��ָ��
	int *&r = p;			// r ��һ����ָ�� p ������

	r = &i;					// r ������һ��ָ��, ��˸� r ��ֵ &i ������ p ָ�� i
	*r = 0;					// ������ r �õ� i, Ҳ���� p ָ��Ķ���, �� i ��ֵ��Ϊ 0

	return 0;
}
