#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int sushu(int x)
{
	int a = 0;
	for (a = 2; a < x; a++)
		if (x % a == 0)
			return 0;
	if (a == x)//�����жϣ���ֱ��return 1
		return 1;
}

int erfen(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}

int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{ 
		if (sushu(i) == 1)
			printf("%d\n", i);
	}
	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int r = erfen(arr, k, sz);
	if (r == -1)
		printf("�Ҳ���ָ��������\n");
	else
		printf("�ҵ��ˣ��±�Ϊ%d\n", r);

	return 0;
}