// 5-2. 念数字.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);
	int a;//当前处理的位
	if (input < 0) {
		printf("fu");
		input = -input;
	}
	int b = 1;//input倒序
	for (; input != 0;) {
		if (input == 0) {
			break;
		}
		b *= 10;
		b += input % 10;
		input /= 10;
	}
	
	for (; b!=1;b /= 10) { 
		a = b % 10;
		switch (a)
		{ 
		case 0:
			printf(" ling");
			break;
		case 1:
			printf(" yi");
			break;
		case 2:
			printf(" er"); 
			break;
		case 3:
			printf(" san");
			break;
		case 4:
			printf(" si");
			break;
		case 5:
			printf( "wu");
			break;
		case 6:
			printf(" liu");
			break;
		case 7:
			printf(" qi");
			break;
		case 8:
			printf(" ba");
			break;
		case 9:
			printf(" jiu");
			break;
		}
		b -= a;
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单