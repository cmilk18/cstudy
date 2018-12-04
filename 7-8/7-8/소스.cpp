/*20181106 strcpy 함수의 사용 예*/
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void)
{
	char str1[20], str2[20];

	strcpy(str1, "abcde");
	printf("str1=%s\n", str1);

	strcpy(str2, str1);
	printf("str2=%s\n", str2);

	return 0;
}