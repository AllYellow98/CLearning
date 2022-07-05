#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int add(int a, int b)
{
	int c = a + b;
	return c;
}

int main()
{
	char yorn ='n';
	printf("keep\n");
	scanf("%c",&yorn);
	if (yorn == 'y')//==判断相等
		printf("jiayou\n");
	else
		printf("no\n");

	int day = 0;
	while (day <= 500)
	{
		printf("日积月累:%d\n",day);
		day++;//++自我循环
	}
	if(day>=400)
		printf("lqtzs");

	int num1 = 50;
	int num2 = 80;
	int sum= add(num1, num2);
	printf("%d\n", sum);

	int day2[7] = { 1,2,3,4,5,6,7 };//定义一个存放7个整数数字的数组
	int x = 0;
	while(x<7) {
		printf("%d\n", day2[x]);
		x++;
	}
	//C语言中，0表示假，非0表示真
	int a = 0;
	printf("%d\n", a);
	printf("%d\n",!a);

	return 0;
}