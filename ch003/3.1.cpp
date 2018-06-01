#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
	// 1.9
	int sum = 0, val = 50;
	// 只要 val 的值小于等于 100 , while 循环就会持续执行
	while (val <= 100) {
		sum += val;		// 将 sum + val 赋予 sum
		++val;			// 将 val 加 1
	}
	cout << "Sum of 50 to 100 inclusive is "
		<< sum << endl;

	// 1.10
	int val0 = 10;
	while (val0 >= 0) {
		cout << val0 << " ";
		val0--;
	}
	cout << endl;

	// 1.11
	int v1 = 0, v2 = 0;
	cout << "Please enter 2 numbers : " << endl;
	cin >> v1 >> v2;
	while (v1 <= v2) {
		cout << v1 << " ";
		v1++;
	}
	cout << endl;

	// 1.20
	Sales_data data;
	double price = 0;
	while (cin >> data.bookNo >> data.units_sold >> price)
	{
		data.revenue = data.units_sold * price;
		cout << data.bookNo << " " << data.units_sold << " " << data.revenue << endl;
	}

	// 1.21
	Sales_data 	data1, data2;
	double price = 0;
	// 读入第 1 笔交易 : ISBN, 销售数量, 单价
	cin >> data1.bookNo >> data1.units_sold >> price;
	// 计算销售输入
	data1.revenue = data1.units_sold * price;
	// 读入第 2 笔交易
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		// 输出 : ISBN, 总销售量, 总销售额, 平均价格
		cout << data1.bookNo << " " << totalCnt
			<< " " << totalRevenue << " ";
		if (totalCnt != 0)
			cout << totalRevenue / totalCnt << endl;
		else
			cout << "(no sales)" << endl;
	}
	else {					// 两笔交易的 ISBN 不一样
		cerr << "Data must refer to the same ISBN"
			<< endl;
	}

	// 1.22 - 1.25
	Sales_data curr, input;
	double price = 0;
	if (cin >> curr.bookNo >> curr.units_sold >> price) {
		Sales_data sum;
		sum.bookNo = curr.bookNo, sum.units_sold = curr.units_sold, sum.revenue = curr.revenue;
		while (cin >> input.bookNo >> input.units_sold >> price) {
			if (sum.bookNo == input.bookNo) {
				sum.units_sold = sum.units_sold + input.units_sold;
				sum.revenue = sum.revenue + input.revenue;		// 标示成功
			}
			else {
				// 输出 : ISBN, 总销售量, 总销售额, 平均价格
				cout << sum.bookNo << " " << sum.units_sold
					<< " " << sum.revenue << " ";
				if (sum.units_sold != 0)
					cout << sum.revenue / sum.units_sold << endl;
				else
					cout << "(no sales)" << endl;
			}
		}
	}
	return 0;
}

