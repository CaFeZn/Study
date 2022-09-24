// 4-3. 统计素数并求和.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*思路：
判断素数
加和
*/

#include "pch.h"
#include <iostream>
#include <stdio.h>

int main()
{
	int M , N;//从M至N的区间
	scanf_s("%d %d", &M, &N);
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

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单