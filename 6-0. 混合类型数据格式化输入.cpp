// 6-0. 混合类型数据格式化输入.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	double a, b;//浮点数1、浮点数2
	char c; //字符
	int d;//整数
	scanf_s("%lf %d %c %lf", &a, &d, &c, &b);
	printf("%c %d %.2f %.2f", c, d, a, b);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单