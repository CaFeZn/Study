//07-1. 换个格式输出整数 (15)

#include <stdio.h>

int main ()
{
    char input[4]={0};
    int n = 0;
    int i = 1;
    do
    {
    input[n] = getchar();
    n += 1;
    }while (input[n-1] != '\n');
    while (input[n-4] > '0' && n > 3)
    {
        printf("B");
        input[n-4] -= 1;
    }
    while (input[n-3] > '0' && n > 2)
    {
        printf("S");
        input[n-3] -= 1;
    } 
    while (input[n-2] > '0' && n > 1)
    {
        printf("%d",i);
        input[n-2] -= 1;
        i += 1;
    }
    return 0;
}

/*
作者
CHEN, Yue
让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/