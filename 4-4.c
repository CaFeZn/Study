﻿//04-4. 猜数字游戏(15)

#include <stdio.h>

int main()
{
	int Number;//输入的随机数
	int m = 1;//最多猜的次数
	int n = 0;//输入猜的值
	scanf("%d %d", &Number, &m);
	int N;//猜的次数
	//int Break = 0;//break接力标记
	for (N = 0;N <= m; N++) {
		scanf("%d", &n);
		if (n < 0) {
		printf("Game over");
		//int Break = 1;
		return 0;
		}
		else if (n < Number) {
			printf("Too small\n");
		}
		else if (n > Number) {
			printf("Too big\n");
		}
		else {
			break;
		}
	}
	if (N > m) {
		printf("Game over");
		return 0;
	}
	else if (N == 1) {
		printf("Bingo!");
	}
	else if (N < 3) {
		printf("Lucky You!");
	}
	else if (N >= 3) {
		printf("Good Guess!");
	}
}

/*
猜数字游戏是令系统随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。

输入格式：

输入第一行中给出2个不超过100的正整数，分别是系统产生的随机数、以及猜测的最大次数N。随后每行给出一个用户的输入，直到出现负数为止。

输出格式：

在一行中输出每次猜测相应的结果，直到输出猜对的结果或“Game Over”则结束。

输入样例：
58 4
70
50
56
58
60
-2
输出样例：
Too big
Too small
Too small
Good Guess!
*/