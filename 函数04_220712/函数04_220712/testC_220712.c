#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


void Add(int* p)//每调用一次，num增加1
{
	(*p)++;
}

void Print(int n)//递归函数
{
	if (n > 9)
		Print(n / 10);
	printf("%d ", n%10);
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);
	Add(&num);
	printf("num=%d\n", num);

	printf("%d", strlen("abc"));
	printf("%d", printf("%d", printf("%d", 43)));//结果为4321

	unsigned int num = 0;
	scanf("%d", &num);
	Print(num);

	return 0;
}