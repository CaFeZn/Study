//07-0. 写出这个数 (20)

#include <stdio.h>

int main ()
{
	int i = 0;
	int sum = 0;
	char number[101]={0};
	char *name[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	do
	{
		number[i] = getchar();
		if (number[i]== '\n')
		{
		break;
		}
		else
		{
		sum += number[i]-'0';
		i += 1;
		}
	}while (number[i] != '\n');

	int a;//计sum有几位数，为sum逐位填充进数组
	int b = sum;
	for (a = 0; b != 0; a++)
	{
		b /= 10;
	}
	char coun[100];//sum的正序数组
	sprintf(coun,"%d",sum);//sum的正序数组
	int c;
	for (c = 0;c != a;)
	{
		printf("%s",name[coun[c]-'0']);
		if (a != 0)
		{
			printf(" ");
		}
		c += 1;
		
	}

	return 0;
}

/*
作者
CHEN, Yue
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10^100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/