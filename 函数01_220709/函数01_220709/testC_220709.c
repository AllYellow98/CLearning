#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("****    1.Play      0.Exit    ****\n");
	printf("**********************************\n");
	printf("**********************************\n");

}

void game()//生成一个随机数
{
	//1.生成随机数
	int r = 0;
	//拿时间戳设置随机数的起始点
	//用时间戳
	r = rand()%100+1;//生成随机数//RAND_MAX(0-32767)//生成1-100之间的数字
	//printf("%d\n",r);
	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if(guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));//NULL空指针//需要一个变化的值来生成随机值//放主函数中，只生成一次，增加随机性
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();//猜数字游戏过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			system("cls");
			printf("选择错误，请重新选择\n");
			break;
		}
	} 
	while (input);

	return 0;
}