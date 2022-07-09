#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//while ((c = getchar() )!= EOF)的应用场景
	int yn = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("请输入密码:>\n");
	scanf("%s", password);//输入密码，并存放在password数据中
	printf("请确认（Y/N):>");
	getchar();//缓冲区还剩一个‘\n’，需要读取掉才能执行
	while ((ch = getchar()) != '\n')
	{;}//读取缓冲区剩余的字符，直到\n
	yn = getchar();
	if (yn == 'Y')
		printf("确认成功");
	else
		printf("确认失败");

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}//打印0-9的数字

	for (int i = 0; i <= 10; i++)
		printf("%d\n", i);
	
	return 0;
}