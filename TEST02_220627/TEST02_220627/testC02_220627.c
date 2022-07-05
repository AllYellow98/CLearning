#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define Min = 10

int main()
{
	const int n = 10;//n是变量，但又有常属性，故n为常变量
	int arr[n] = {0};

	enum COLOR
	{
		R,
		G, 
		B,
		W
	};//枚举常量
	printf("%d\n", R);
	printf("%d\n", W);

	char abc1[] = "abc";//数组
	char abc2[] = { 'a','b','c'};//加上结束标志/0即可正常打印
	printf("%s\n", abc1);
	printf("%s\n", abc2);
	printf("%d\n", strlen(abc1));//strlen-string length  计算字符串长度
	printf("%d\n", strlen(abc2));//统计字符长度，截止于随机值，打印出随机值

	printf("c:\\\\\\\\test");

	printf("%d\n", strlen("c:\test\32\test.c"));//\32 表示8进制代表的十进制数字，作为ASCII码所对应的字符
	printf("%c\n\x67");

	return 0;
}