﻿//05-3. 求a的连续和(15)

#include <stdio.h>

int main()
{
	int a, n = 0;//输入、n个a时求和
	scanf("%d %d", &a, &n);
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

/*
作者
翁恺（浙江大学）
输入两个整数a和n，a的范围是[0,9]，n的范围是[1,8]，求数列之和S = a+aa+aaa+...+aaa...a（n个a）。如a为2、n为8时输出的是2+22+222+...+22222222的和。

输入格式：

输入在一行中给出两个整数，先后表示a和n。

输出格式：

在一行中输出要求的数列之和。

输入样例：
2 4
输出样例：
2468
*/