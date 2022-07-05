#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int a = 2022;

int main()
{
	printf("hello world\n");

	char f = 'F'; char u = 'U'; char c = 'C'; 	char k = 'K';
	printf("%c", f); printf("%c", u); printf("%c", c); printf("%c\n", k);

	int age = 2000;
	printf("%d\n", age);

	long age2 = 200;
	printf("%d\n", age2);

	float x = 3.14;
	printf("%f\n", x);

	double R2 = 1.41;
	printf("%lf\n", R2);

	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int sum = num1 + num2;
	printf("sum=%d\n", sum);

	printf("%d\n", a);
	return 0;
}