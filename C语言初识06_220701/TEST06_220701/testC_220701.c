#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Information
{
	char Name[20];
	int Age;
};  //�����ṹ������

int main()
{
	struct Information a1 = { "����",20 };//���ýṹ�����ʹ���һ�������ͽṹ�����
	struct Information a2 = { "����",35 };
	printf("������%s\n", a1.Name);//������.�ҵ���Ӧ��Ա
	printf("������%s\n", a2.Name);
	printf("���䣺%d��\n", a1.Age);
	a1.Age = 21 ;//�޸����䣨������
	strcpy(a2.Name,"����");//�޸����������顢�ַ������ƣ����õ�����strcpy-string copy�ַ�������
	printf("�޸ĺ�����䣺%d��\n", a1.Age);
	printf("�޸ĺ��������%s\n", a2.Name);

	struct Information* pi = &a1;
	printf("%s\n", (*pi).Name);//����ָ���ӡ
	printf("%s\n", pi->Name);//����->��������ӡ

	return 0;
}