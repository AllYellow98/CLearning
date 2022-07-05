#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Information
{
	char Name[20];
	int Age;
};  //创建结构体类型

int main()
{
	struct Information a1 = { "张三",20 };//利用结构体类型创建一个该类型结构体变量
	struct Information a2 = { "李四",35 };
	printf("姓名：%s\n", a1.Name);//操作符.找到对应成员
	printf("姓名：%s\n", a2.Name);
	printf("年龄：%d岁\n", a1.Age);
	a1.Age = 21 ;//修改年龄（变量）
	strcpy(a2.Name,"张四");//修改姓名（数组、字符串名称）需用到函数strcpy-string copy字符串拷贝
	printf("修改后的年龄：%d岁\n", a1.Age);
	printf("修改后的姓名：%s\n", a2.Name);

	struct Information* pi = &a1;
	printf("%s\n", (*pi).Name);//利用指针打印
	printf("%s\n", pi->Name);//利用->操作符打印

	return 0;
}