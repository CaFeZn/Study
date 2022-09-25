// 4-0. 求符合给定条件的整数集.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int input;
	scanf_s("%d", &input);
	int column;//列
	int a, b, c, max;//百位、十位、个位、进位数
	int time=0;//总输出组数
	a = input, b = input, c = input, max = a + 4;
	for (column=0 ; time<24; column += 1 ,time += 1)
	{
		if (column == 6) 
		{
			printf("\b\n");
			column = 0;
			a += 1;
			b = input;
			c = input;
		}
		do
		{
			c += 1;//个位逐次加一
			if (c == max) //判断五进制进位
			{
				c = input;
				b += 1;
			}
			if (b == max) //判断五进制进位
			{
				b = input;
				a += 1;
			}
		} while (a == b || b == c || c == a);

		printf("%d%d%d ", a, b, c);
		
	}
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单