#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char w = 'w';
	char* pw = &w;
	*pw='a';
	printf("%c\n", pw);
	return 0;
}