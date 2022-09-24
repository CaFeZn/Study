// 5-3. 求a的连续和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int a, n = 0;//输入、n个a时求和
	scanf_s("%d %d", &a, &n);
	int sum = 0;//求和
	int count = 0;//次数
	int b = a;//中间变量
	for (count = 0; count != n; count++) {
		sum += b;
		b = b * 10 + a;
	}
	printf("%d", sum);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单