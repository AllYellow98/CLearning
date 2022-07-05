#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	scanf ("%d", &num);
	int num2 = num % 2;
	if (num2==1)
		printf("这个数是奇数\n");
	else
		printf("这个数是偶数\n");

	int a = 0;
	while (a <= 100)
	{
	    int b = a % 2;
		if (b == 1)
			printf("%d\n", a);
		a++;
	}

	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;
	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误，请输入1-7之间的数值\n");
		break;
	}

	int i = 1;
	while(i<10)
	{
		if (i == 5)
			break;//满足后直接跳出循环
			continue;//本次满足后跳过后面直接返回while
		printf("%d\n", i);
		i++;
	}

	int c = getchar();//getchar接收一个字符
	putchar(c);//打印接收的字符

	int c = 0;
	//CTRL+Z  EOF -end of file 
	while ((c = getchar() )!= EOF)
	{
		putchar(c);
	}

	return 0;
}