#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strlen��������-�����ַ�������
#include<Windows.h>//Sleep��������
#include<stdlib.h>//system cls��������

int main()
{
	char ch1[] = "welcome to shandong!!!";
	char ch2[] = "######################";
	int left = 0;
	int right = strlen(ch1) - 1;
	while (left <= right)
	{	
		system("cls");//ִ��ϵͳ����ĺ���  cls=�����Ļ
		ch2[left] = ch1[left];
		ch2[right] = ch1[right];
		printf("%s\n", ch2);
		Sleep(1000);//ͣ��һ��
		left++;
		right--;
}

	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3;i++)
	{
		printf("����������:>");
		scanf("%s",password );
		if (strcmp(password, "123456a")==0)//�ж��ַ�����Ȳ���==��Ӧʹ�ÿ⺯��-strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else if(i<2)
			printf("�����������������\n");
		else
			printf("����������࣬���˳�����\n");
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
	printf("���Լ��Ϊ%d", b);//շת�����

	return 0;
}