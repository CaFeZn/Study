//05-2. 念数字(15)

#include <stdio.h>

int main()
{
	int input;
	scanf("%d", &input);
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

/*
作者
翁恺（浙江大学）
输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：

输入在一行中给出一个整数，如：1234。

提示：整数包括负数、零和正数。

输出格式：

在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling
*/