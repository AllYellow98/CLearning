#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//while ((c = getchar() )!= EOF)��Ӧ�ó���
	int yn = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("����������:>\n");
	scanf("%s", password);//�������룬�������password������
	printf("��ȷ�ϣ�Y/N):>");
	getchar();//��������ʣһ����\n������Ҫ��ȡ������ִ��
	while ((ch = getchar()) != '\n')
	{;}//��ȡ������ʣ����ַ���ֱ��\n
	yn = getchar();
	if (yn == 'Y')
		printf("ȷ�ϳɹ�");
	else
		printf("ȷ��ʧ��");

	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}//��ӡ0-9������

	for (int i = 0; i <= 10; i++)
		printf("%d\n", i);
	
	return 0;
}