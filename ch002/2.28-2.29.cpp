#include <iostream>

using namespace std;

int main()
{
	// 2.28
	// ���� int �� ���� i, int ָ�볣�� cp
	int i, *const cp;
	// ���� int ָ�� p1, int ָ�볣�� p2
	int *p1, *const p2;
	// ���� int ���� ic, ���� ic ������ r
	const int ic, &r = ic;
	// ���� ָ�� int �������� �� int ����ָ��
	const int *const p3;
	// ���� ����ָ�� p
	const int *p;

	// 2.29
	i = ic;
	p1 = p3;
	p1 = &ic;
	p3 = &ic;
	p2 = p1;
	ic = *p3;

	return 0;
}
