﻿//03-4. 成绩转换(15)

#include <stdio.h>

int main()
{
	int X;
	scanf("%d", &X);
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

/*
作者
沈睿（浙江大学）
本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；小于90且大于等于80为B；小于80且大于等于70为C；小于70且大于等于60为D；小于60为E。
输入格式：

输入在一行中给出1个整数的百分制成绩。

输出格式：

在一行中输出对应的五分制成绩。

输入样例：
90
输出样例：
A
*/