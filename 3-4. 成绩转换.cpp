// 3-4. 成绩转换.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int X;
	scanf_s("%d", &X);
	if (X >= 90) {
		printf("A");
	}
	else if (X >= 80 && X < 90) {
		printf("B");
	}
	else if (X >= 70 && X < 80) {
		printf("C");
	}
	else if (X >= 60 && X < 70) {
		printf("D");
	}
	else if (X < 60) {
		printf("E");
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单