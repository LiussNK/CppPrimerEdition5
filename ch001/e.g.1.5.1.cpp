#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item book;
	// ���� ISBN ��, �۳��Ĳ����Լ����ۼ۸�
	std::cin >> book;
	// д�� ISBN, �۳��Ĳ���, �����۶��ƽ���۸�
	std::cout << book << std::endl;

	Sales_item item1, item2;
	std::cin >> item1 >> item2;			// ��ȡһ�Խ��׼�¼
	std::cout << item1 + item2 << std::endl;	// ��ӡ���ǵĺ�

	return 0;
}
