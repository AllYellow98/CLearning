#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age = 10;
	if (age > 18)
		printf("成年\n");
	else
		printf("未成年\n");

	int age = 18;
	if (age > 18)
		printf("成年\n");
	else if (age>=18 && age<25)
		printf("青年\n");
	else
		printf("成年\n");

	int num = 4;
	if(5==num)//= 赋值 ==判断相等 ，把常量写在左边易排查bug
	{
		printf("ttt\n");
	}

	return 0;
}