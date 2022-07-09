#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		for (; j < 10; j++)//此处j=0不能被省略，否则循环后j=10，只打印10次
			printf("ABC");
	}

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)//k被赋值0,0为假，循环不进行
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
	printf("阶乘为%d\n",j );//计算n的阶乘

	int n = 0;
	int i = 0;
	int j = 1;
	int k = 0;
	for (i = 1; i <= n,n<10; i++,n++)
	{
		j = j * i;
		k = j + k;
	}
	printf("%d\n", k);//计算1!+2!+3!+...9!+10!的值

	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;

	int sz = sizeof(a) / sizeof(a[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz-1;//右下标

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
			printf("找到了，下标为%d\n", mid);
		break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}	
	//二分查找算法查找有序数组中的具体数字
	return 0;
}