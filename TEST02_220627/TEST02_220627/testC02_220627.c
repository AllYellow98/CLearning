#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define Min = 10

int main()
{
	const int n = 10;//n�Ǳ����������г����ԣ���nΪ������
	int arr[n] = {0};

	enum COLOR
	{
		R,
		G, 
		B,
		W
	};//ö�ٳ���
	printf("%d\n", R);
	printf("%d\n", W);

	char abc1[] = "abc";//����
	char abc2[] = { 'a','b','c'};//���Ͻ�����־/0����������ӡ
	printf("%s\n", abc1);
	printf("%s\n", abc2);
	printf("%d\n", strlen(abc1));//strlen-string length  �����ַ�������
	printf("%d\n", strlen(abc2));//ͳ���ַ����ȣ���ֹ�����ֵ����ӡ�����ֵ

	printf("c:\\\\\\\\test");

	printf("%d\n", strlen("c:\test\32\test.c"));//\32 ��ʾ8���ƴ����ʮ�������֣���ΪASCII������Ӧ���ַ�
	printf("%c\n\x67");

	return 0;
}