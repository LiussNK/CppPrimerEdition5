#include <iostream>

using namespace std;

int main()
{
	int ival = 42;
	int *p = &ival;		// p ����ű��� ival �ĵ�ַ, ����˵ p ��ָ����� ival ��ָ��
	cout << *p;			// �ɷ��� * �õ�ָ�� p ��ָ�Ķ���, ��� 42

	*p = 0;				// �ɷ��� * �õ�ָ�� p ��ָ�Ķ���, ���ɾ��� p Ϊ���� ival ��ֵ
	cout << *p;			// ��� 0

	cout << endl << ival;

	int *p1 = nullptr;	// �ȼ��� int *p1 = 0;
	int *p2 = 0;		// ֱ�ӽ� p2 ��ʼ��Ϊ���泣�� 0
						// ��Ҫ���� #include cstdlib
	int *p3 = NULL;		// �ȼ��� int *p3 = 0;

	int i = 42;
	int *pi = 0;		// pi ����ʼ��, ��û��ָ���κζ���
	int *pi2 = &i;		// pi2 ����ʼ��, ���� i �ĵط�־
	int *pi3;			// ��� pi3 �����ڿ���, �� pi3 ��ֵ���޷�ȷ����

	pi3 = pi2;			// pi3 �� pi2 ָ��ͬһ������
	pi2 = 0;			// ���� pi2 ��ָ���κζ�����

	pi = &ival;			// pi ��ֵ���ı�, ���� pi ָ���� ival

	*pi = 0;			// ival ��ֵ���ı�, ָ�� pi ��û�иı�

	ival = 1024;
	pi = 0;				// pi �Ϸ�, ��һ����ָ��
	pi2 = &ival;		// pi2 ��һ���Ϸ���ָ��, ����� ival �ĵ�ַ
	if (pi)				// pi ��ֵ�� 0, ���������ֵ�� false
						// ...
		cout << " if (pi) ";
	if (pi2)			// pi2 ָ��ival, ��� ����ֵ���� 0, ������ֵ�� true
						// ...
		cout << " if (pi2)";

	double obj = 3.14, *pd = &obj;
	// ��ȷ: void* �ܴ���������Ͷ���ĵ�ַ
	void *pv = &obj;	// obj �������������͵Ķ���
	pv = pd;			// pv ���Դ���������͵�ָ��

	return 0;
}
