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
	if (yorn == 'y')//==�ж����
		printf("jiayou\n");
	else
		printf("no\n");

	int day = 0;
	while (day <= 500)
	{
		printf("�ջ�����:%d\n",day);
		day++;//++����ѭ��
	}
	if(day>=400)
		printf("lqtzs");

	int num1 = 50;
	int num2 = 80;
	int sum= add(num1, num2);
	printf("%d\n", sum);

	int day2[7] = { 1,2,3,4,5,6,7 };//����һ�����7���������ֵ�����
	int x = 0;
	while(x<7) {
		printf("%d\n", day2[x]);
		x++;
	}
	//C�����У�0��ʾ�٣���0��ʾ��
	int a = 0;
	printf("%d\n", a);
	printf("%d\n",!a);

	return 0;
}