#include <iostream>
// �ó��������˵��: �����ڲ����˶�����ȫ�ֱ���ͬ�����±���
int reused = 42;				// reused ӵ��ȫ��������
int main()
{
	int unique = 0;				// unique ӵ�п�������
								// ��� #1: ʹ��ȫ�ֱ��� reused; ��� 42 0
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;				// �½��ֲ����� reused, ������ȫ�ֱ��� reused
								// ��� #2:  ʹ�þֲ����� reused; ��� 0 0
	std::cout << reused << " " << unique << std::endl;
	std::cout << ::reused << " " << unique << std::endl;
	return 0;
}
