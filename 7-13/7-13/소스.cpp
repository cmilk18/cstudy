/*20181106 ���ڿ��� �����*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[20];
	char mag[40];

	printf("�̸��� �Է��ϼ��� : ");
	gets(name);

	sprintf(msg, "%s�� �ȳ��ϼ���?", name);
	puts(msg);

	return 0;
}