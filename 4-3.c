//04-3. 统计素数并求和(20)

#include <stdio.h>

int main()
{
	int M , N;//从M至N的区间
	scanf("%d %d", &M, &N);
	int i ,j;//计算变量
	int sum = 0;//素数之和
	int count = 0;//素数个数
	for (i = M; i <= N; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0 && i!=j) {
				break;
			}
			else if (i % j == 0 && i==j){
				count += 1;
				sum += i;
			}
		}
	}
	printf("%d %d", count, sum);
	return 0;
}

/*
作者
张彤彧（浙江大学）
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式：

输入在一行中给出2个正整数M和N（1<=M<=N<=500）。

输出格式：

在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例：
10 31
输出样例：
7 143
*/