// 5-1. 约分最简分式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int a, b;//分子、分母
	scanf_s("%d/%d", &a, &b);
	int c;//公因数
	if (a > b) {
		c = b;
	}
	else {
		c = a;
	}
	for (; c!=1; c--) {
		if (a%c == 0 and b%c == 0) {
			a /= c, b /= c;
		}
	}
	printf("%d/%d", a, b);
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单