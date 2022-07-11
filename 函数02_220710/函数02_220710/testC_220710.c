#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Max(int x, int y)//求两个数的较大值
{
	if (x > y)
		return x;
	else
		return y;
}

void Swap1(int x, int y)//此方法无法交换两个数的值
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* x, int* y)//交换两个数的值//需要交换地址
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	char arr[] = "hello world";
	memset(arr, '*', 5);
	printf("%s\n",arr);

	int a = 10;
	int b = 20;
	int max = Max(a, b);
	printf("%d\n", max);

	return 0;
}