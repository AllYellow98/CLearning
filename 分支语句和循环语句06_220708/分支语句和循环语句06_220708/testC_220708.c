#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>//������ѧ�⺯��
#include<stdlib.h>//����ϵͳ����
#include<string.h>//�ַ����ȽϺ�������

int main()
{
	int i = 1000;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
			printf("%d��������\n", i);
		else if(i%400==0)
		{
			printf("%d��������\n", i);
		}
	}

	int i = 0;
	int a = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (a = 2; a < i; a++)//���Ż���a<=��ƽ��i���������������ؿ�д����������ˣ�һ���ӱ�С�ڿ�ƽ��i
		for(a=2;a<=sqrt(i);a++)//sqrt -��ƽ������ѧ�⺯��
			if (i % a == 0)
			{
				break;
			}
		if (a == i)
		//if��a>sqrt��i����
		{
			count++;
			printf("%d\n", i);
		}
	}
	printf("%d\n", count);
	//�����жϣ��Գ���

	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if(i / 10 == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);


	int a = 0;
	int b = 0;
	double sum = 0;//С��֮���ø���ֵ
	for (a = 1, b = 2; a < 100, b <= 100; a=a + 2, b=b + 2)
	{
		sum = sum + (1.0 / a) - (1.0 / b);
	}
	printf("%lf", sum);//���ö��ַ�����⣬����һ��

	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("%lf", sum);//������

	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
	int max = arr[0];
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 1; i < sz; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("���ֵ��%d", max);

	int i = 0;//ȷ����ӡ����
	int j = 1;//ȷ����ӡ����
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);//%-2d(%2d)��ʾ��ӡ��λ�������ɿո��룬��ʵ����(��)����
		}
		printf("\n");
	}

	char ch[20] = { 0 };
	system("shutdown -s -f -t 60");
	printf("���Խ���һ�����ڹػ�,���������ȡ���ػ�\n");
again:
	scanf("%s" ,ch);
	if (strcmp(ch, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("����������\n");
		goto again;
	}
		return 0;
}