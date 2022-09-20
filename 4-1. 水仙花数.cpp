// 4-1. 水仙花数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int N;
	scanf_s("%d",&N);
	int a, b, c;//百、十、个位的N次幂
	int A, B, C;//百、十、个位
	int count;//幂计算 计数
	int number;//输出值
	for (A = 1; A <= 9; A++) {
		for (B = 0; B <= 9; B++) {
			for (C = 0; C <= 9; C++) {
				a = A, b = B, c = C;
					for (count = 2; count <= N; count++) {
						a *= A;
						b *= B;
						c *= C;
					}
				number = A * 100 + B * 10 + C;
				if (number == a + b + c) {
					printf("%d\n", number);
				}
			}
		}
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单