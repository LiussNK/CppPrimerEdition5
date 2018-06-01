#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

int main()
{
	/*vector<int> vi(10);

	auto mid = vi.begin() + vi.size() / 2;

	auto it = vi.begin;
	if (it < mid)
	cout << "it < mid";*/

	vector<string> text = { "a", "b", "c", "d", "e" };
	string sought;
	cin >> sought;
	// text �����������
	// beg �� end ��ʾ���������ķ�Χ
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;		//  ��ʼ״̬�µ��м��
													// ������Ԫ����δ��鲢�����ǻ�û���ҵ� sought ʱִ��ѭ��
	while (mid != end && *mid != sought)
	{
		if (sought < *mid)							// ����Ҫ�ҵ�Ԫ����ǰ�벿���� ?
			end = mid;								// �����, ����������Χ�ǵĺ��Ե���벿��
		else										// ����Ҫ�ҵ�Ԫ���ں�벿��
			beg = mid + 1;							// �� mid ֮��Ѱ��
		mid = beg + (end - beg) / 2;				// �µ��м��
	}
	cout << mid - text.begin() << endl;
	if (mid != text.end())
		cout << *mid << endl;
	else
	{
		cout << "not found" << endl;
	}

	return 0;
}

