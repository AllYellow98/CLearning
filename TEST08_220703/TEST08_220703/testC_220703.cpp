#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num = 0;
	scanf ("%d", &num);
	int num2 = num % 2;
	if (num2==1)
		printf("�����������\n");
	else
		printf("�������ż��\n");

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
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;
	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������������1-7֮�����ֵ\n");
		break;
	}

	int i = 1;
	while(i<10)
	{
		if (i == 5)
			break;//�����ֱ������ѭ��
			continue;//�����������������ֱ�ӷ���while
		printf("%d\n", i);
		i++;
	}

	int c = getchar();//getchar����һ���ַ�
	putchar(c);//��ӡ���յ��ַ�

	int c = 0;
	//CTRL+Z  EOF -end of file 
	while ((c = getchar() )!= EOF)
	{
		putchar(c);
	}

	return 0;
}