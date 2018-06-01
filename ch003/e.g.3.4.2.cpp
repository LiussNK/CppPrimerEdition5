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
	// text 必须是有序的
	// beg 和 end 表示我们搜索的范围
	auto beg = text.begin(), end = text.end();
	auto mid = text.begin() + (end - beg) / 2;		//  初始状态下的中间点
													// 当还有元素尚未检查并且我们还没有找到 sought 时执行循环
	while (mid != end && *mid != sought)
	{
		if (sought < *mid)							// 我们要找的元素在前半部分吗 ?
			end = mid;								// 如果是, 调整搜索范围是的忽略掉后半部分
		else										// 我们要找的元素在后半部分
			beg = mid + 1;							// 在 mid 之后寻找
		mid = beg + (end - beg) / 2;				// 新的中间点
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

