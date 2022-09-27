//十进制转二进制

#include <stdio.h>

int main()
{
	int ten;//十进制数//
	scanf("%d", &ten);
	int times = 1;//倍数//
	int two = 0;//二进制数//
	for (;ten != 0;)
	{
		//逐位输出二进制数//
		two = two + ten % 2 * times;
		//准备下一次计算除二取余//
		ten = (ten / 2);
		times = times * 10;
	}
	
	printf("%d\n", two);
	return 0;
}