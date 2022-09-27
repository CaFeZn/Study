//04-0. 求符合给定条件的整数集(15)

#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
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

/*
作者
徐镜春（浙江大学）
给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。

输入格式：

输入在一行中给出A。

输出格式：

输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。

输入样例：
2
输出样例：
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/