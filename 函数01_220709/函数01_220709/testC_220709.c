#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
void menu()
{
	printf("**********************************\n");
	printf("**********************************\n");
	printf("****    1.Play      0.Exit    ****\n");
	printf("**********************************\n");
	printf("**********************************\n");

}

void game()//����һ�������
{
	//1.���������
	int r = 0;
	//��ʱ����������������ʼ��
	//��ʱ���
	r = rand()%100+1;//���������//RAND_MAX(0-32767)//����1-100֮�������
	//printf("%d\n",r);
	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if(guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));//NULL��ָ��//��Ҫһ���仯��ֵ���������ֵ//���������У�ֻ����һ�Σ����������
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			system("cls");
			game();//��������Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			system("cls");
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} 
	while (input);

	return 0;
}