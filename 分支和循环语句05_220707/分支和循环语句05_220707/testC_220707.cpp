#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strlen函数引用-计算字符串长度
#include<Windows.h>//Sleep函数引用
#include<stdlib.h>//system cls函数引用

int main()
{
	char ch1[] = "welcome to shandong!!!";
	char ch2[] = "######################";
	int left = 0;
	int right = strlen(ch1) - 1;
	while (left <= right)
	{	
		system("cls");//执行系统命令的函数  cls=清空屏幕
		ch2[left] = ch1[left];
		ch2[right] = ch1[right];
		printf("%s\n", ch2);
		Sleep(1000);//停留一秒
		left++;
		right--;
}

	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3;i++)
	{
		printf("请输入密码:>");
		scanf("%s",password );
		if (strcmp(password, "123456a")==0)//判断字符串相等不用==，应使用库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
		else if(i<2)
			printf("密码错误，请重新输入\n");
		else
			printf("错误次数过多，请退出程序\n");
	}
	
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d""%d""%d", &a, &b, &c);
	if (a < b)
	{ 
		int tem1 = a;
		a = b;
		b = tem1;
	}
	if (a < c)
	{
		int tem2 = a;
		a = c;
		c = tem2;
	}
	if (b < c)
	{
		int tem2 = b;
		b = c;
		c = tem2;
	}
	printf("%d>%d>%d", a, b, c);

	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if(i%3 == 0)
		printf("%d\n", i);
	}

	int a = 0;
	int b = 0;
	int i = 1;
	scanf("%d""%d", &a, &b);
	while (a % b != 0)
	{
		i = a % b;
		a = b;
		b = i;
	}
	printf("最大公约数为%d", b);//辗转相除法

	return 0;
}