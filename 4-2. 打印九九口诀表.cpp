// 4-2. 打印九九口诀表.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	int i,j;//第一个乘数、第二个乘数
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= i; j++) {
			printf("%dx%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单