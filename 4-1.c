//04-1. 水仙花数(20)

#include <stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
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

/*
作者
徐镜春（浙江大学）
水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。

输入格式：

输入在一行中给出一个正整数N（3<=N<=7）。

输出格式：

按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例：
3
输出样例：
153
370
371
407
*/