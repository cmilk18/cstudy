/*20181106 strlen�Լ��� ��*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[] = "abcde";
	char str2[10] = "";

	printf("str1�� ���� = %d\n", strlen(str1));
	printf("str2�� ���� = %d\n", strlen(str2));
	printf("���ڿ��� ���� = %d\n", strlen("Hello World"));

	return 0;
}