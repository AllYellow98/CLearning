#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)//�˴�j=0���ܱ�ʡ�ԣ�����ѭ����j=10��ֻ��ӡ10��
			printf("ABC");
	}

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k����ֵ0,0Ϊ�٣�ѭ��������
		k++;

	int i = 0;
	do
	{		i++;
	printf("%d\n", i);
}
	while (i < 10);
	
	int n = 0;
	int i = 0;
	int j = 1;
	scanf("%d", & n);
	for (i=1; i<=n; i++)
	{
		j = j * i;
	}
	printf("�׳�Ϊ%d\n",j );//����n�Ľ׳�

	int n = 0;
	int i = 0;
	int j = 1;
	int k = 0;
	for (i = 1; i <= n,n<10; i++,n++)
	{
		j = j * i;
		k = j + k;
	}
	printf("%d\n", k);//����1!+2!+3!+...9!+10!��ֵ

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;

	int sz = sizeof(a) / sizeof(a[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz-1;//���±�

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < n)
		{
			left = mid + 1;
		}
		else if (a[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±�Ϊ%d\n", mid);
		break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}	
	//���ֲ����㷨�������������еľ�������
	return 0;
}