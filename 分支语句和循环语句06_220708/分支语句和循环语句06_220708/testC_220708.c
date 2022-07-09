#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>//引用数学库函数
#include<stdlib.h>//引用系统函数
#include<string.h>//字符串比较函数引用

int main()
{
	int i = 1000;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
			printf("%d年是闰年\n", i);
		else if(i%400==0)
		{
			printf("%d年是闰年\n", i);
		}
	}

	int i = 0;
	int a = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (a = 2; a < i; a++)//可优化成a<=开平方i，若不是素数，必可写成两因子相乘，一因子必小于开平方i
		for(a=2;a<=sqrt(i);a++)//sqrt -开平方的数学库函数
			if (i % a == 0)
			{
				break;
			}
		if (a == i)
		//if（a>sqrt（i））
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("%d\n", count);
	//素数判断，试除法

	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if(i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);


	int a = 0;
	int b = 0;
	double sum = 0;//小数之和用浮点值
	for (a = 1, b = 2; a < 100, b <= 100; a=a + 2, b=b + 2)
	{
		sum = sum + (1.0 / a) - (1.0 / b);
	}
	printf("%lf", sum);//可用多种方法求解，方法一。

	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);//方法二

	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("最大值是%d", max);

	int i = 0;//确定打印行数
	int j = 1;//确定打印列数
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);//%-2d(%2d)表示打印两位，不够由空格补齐，可实现左(右)对齐
		}
		printf("\n");
	}

	char ch[20] = { 0 };
	system("shutdown -s -f -t 60");
	printf("电脑将在一分钟内关机,输入哈哈哈取消关机\n");
again:
	scanf("%s" ,ch);
	if (strcmp(ch, "哈哈哈") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("请重新输入\n");
		goto again;
	}
		return 0;
}