#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age = 10;
	if (age > 18)
		printf("����\n");
	else
		printf("δ����\n");

	int age = 18;
	if (age > 18)
		printf("����\n");
	else if (age>=18 && age<25)
		printf("����\n");
	else
		printf("����\n");

	int num = 4;
	if(5==num)//= ��ֵ ==�ж���� ���ѳ���д��������Ų�bug
	{
		printf("ttt\n");
	}

	return 0;
}