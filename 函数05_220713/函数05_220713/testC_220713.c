#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* str)//不用创建临时变量求字符串长度
{
	if (*str != '\0')
		return 1 + my_strlen(1 + str);
	else
		return 0;
}

int Fac(int n)//一般方法求阶乘
{
	int i = 0;
	int ret = 1;
	for (i = 1; i < n; i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)//递归方法求阶乘
{
	if (n <= 1)
		return 1;
	else
		return n*Fac2(n - 1);
}

int Fib(int n)//求第n个斐波那契数，递归造成大量不必要计算，效率低
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int Fib2(int n)//求第n个斐波那契数，迭代
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
		return c;

}
int main()//先写函数如何使用，再设计函数-TDD，测试驱动开发
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	printf("%d\n", len);
	
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d", ret);

	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib2(n);
	printf("%d\n", ret);

	return 0;
}