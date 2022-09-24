// 5-0. 求序列前N项和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{
	double sum = 0;
	double a, b, c;//分子、分母、中间变量
	int count;//位数
	int n;//输入的正整数
	scanf_s("%d", &n);
	a = 2, b = 1;
	for (count = 0; count != n; count++) {
		sum += a / b;
		c = a;
		a = b + c;
		b = c;
	}
	printf("%.2lf\n", sum);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单