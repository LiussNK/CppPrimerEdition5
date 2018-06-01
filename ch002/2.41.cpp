#include <iostream>
#include <string>
#include "Sales_data.h"
int main()
{
	// 1.20
	Sales_data data;
	double price = 0;
	while (std::cin >> data.bookNo >> data.units_sold >> price)
	{
		data.revenue = data.units_sold * price;
		std::cout << data.bookNo << " " << data.units_sold << " " << data.revenue << std::endl;
	}

	// 1.21
	Sales_data 	data1, data2;
	double price = 0;
	// 读入第 1 笔交易 : ISBN, 销售数量, 单价
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	// 计算销售输入
	data1.revenue = data1.units_sold * price;
	// 读入第 2 笔交易
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;

	if (data1.bookNo == data2.bookNo) {
		unsigned totalCnt = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		// 输出 : ISBN, 总销售量, 总销售额, 平均价格
		std::cout << data1.bookNo << " " << totalCnt
			<< " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
	}
	else {					// 两笔交易的 ISBN 不一样
		std::cerr << "Data must refer to the same ISBN"
			<< std::endl;
	}

	// 1.22 - 1.25
	Sales_data curr, input;
	double price = 0;
	if (std::cin >> curr.bookNo >> curr.units_sold >> price) {
		Sales_data sum;
		sum.bookNo = curr.bookNo, sum.units_sold = curr.units_sold, sum.revenue = curr.revenue;
		while (std::cin >> input.bookNo >> input.units_sold >> price) {
			if (sum.bookNo == input.bookNo) {
				sum.units_sold = sum.units_sold + input.units_sold;
				sum.revenue = sum.revenue + input.revenue;		// 标示成功
			}
			else {
				// 输出 : ISBN, 总销售量, 总销售额, 平均价格
				std::cout << sum.bookNo << " " << sum.units_sold
					<< " " << sum.revenue << " ";
				if (sum.units_sold != 0)
					std::cout << sum.revenue / sum.units_sold << std::endl;
				else
					std::cout << "(no sales)" << std::endl;
			}
		}
	}
	return 0;
}
