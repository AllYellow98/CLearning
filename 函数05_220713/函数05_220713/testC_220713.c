#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int my_strlen(char* str)//���ô�����ʱ�������ַ�������
{
	if (*str != '\0')
		return 1 + my_strlen(1 + str);
	else
		return 0;
}

int Fac(int n)//һ�㷽����׳�
{
	int i = 0;
	int ret = 1;
	for (i = 1; i < n; i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)//�ݹ鷽����׳�
{
	if (n <= 1)
		return 1;
	else
		return n*Fac2(n - 1);
}

int Fib(int n)//���n��쳲����������ݹ���ɴ�������Ҫ���㣬Ч�ʵ�
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int Fib2(int n)//���n��쳲�������������
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
int main()//��д�������ʹ�ã�����ƺ���-TDD��������������
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