#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Max(int x, int y)//���������Ľϴ�ֵ
{
	if (x > y)
		return x;
	else
		return y;
}

void Swap1(int x, int y)//�˷����޷�������������ֵ
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}

void Swap2(int* x, int* y)//������������ֵ//��Ҫ������ַ
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