// 4-4. 猜数字游戏.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int Number;//输入的随机数
	int m = 1;//最多猜的次数
	int n = 0;//输入猜的值
	scanf_s("%d %d", &Number, &m);
	int N;//猜的次数
	//int Break = 0;//break接力标记
	for (N = 0;N <= m; N++) {
		scanf_s("%d", &n);
		if (n < 0) {
		printf("Game over");
		//int Break = 1;
		return 0;
		}
		else if (n < Number) {
			printf("Too small\n");
		}
		else if (n > Number) {
			printf("Too big\n");
		}
		else {
			break;
		}
	}
	if (N > m) {
		printf("Game over");
		return 0;
	}
	else if (N == 1) {
		printf("Bingo!");
	}
	else if (N < 3) {
		printf("Lucky You!");
	}
	else if (N >= 3) {
		printf("Good Guess!");
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单