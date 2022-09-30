//07-0. 写出这个数 (20)

#include <stdio.h>

int main ()
{
    char input = 0;
    int sum = 0;
    scanf("%c",&input);
    while (input != '\n')
    {
        sum += (int)input - 48;
        scanf("%c", &input);
    }
    
    
    int a;//当前处理的位
	if (sum < 0) {
		printf("fu");
		sum = -sum;
	}
	int b = 1;//sum倒序
	for (; sum != 0;) {
		if (sum == 0) {
			break;
		}
		b *= 10;
		b += sum % 10;
		sum /= 10;
	}
	
	for (; b != 1 ; b /= 10) { 
		a = b % 10;
		switch (a)
		{ 
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er"); 
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		}
		b -= a;
        printf(" ");
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