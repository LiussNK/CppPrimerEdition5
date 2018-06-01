#include <iostream>
int main() {
	int i = 42;
	if (i)						// if 条件的值将为 true
	{
		std::cout << i << std::endl;
		i = 0;
		std::cout << i << std::endl;
	}

	unsigned u = 10;
	i = -42;
	std::cout << i + i << std::endl;	// 输出 -84
	std::cout << u + i << std::endl;	// 如果 int 占 32 位, 输出 4294967264

	u = -1;								// 4294967295
	std::cout << u << std::endl;

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl;	// 正确: 输出  32
	std::cout << u2 - u1 << std::endl;	// 正确: 不过, 结果是取模后的值

	u = 11;					// 确定要输出的最大数, 从比它大 1 的数开始
	while (u > 0) {
		--u;							// 先减 1, 这样最后一次迭代时就会输出 0
		std::cout << u << std::endl;
	}
	return 0;
}
