/*20181106 strcmp 함수의 사용예*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str1[20];
	char str2[20] = "ABCDE";

	strcpy_s(str1, "abcde");

	if (strcmp(str1, "abcde") == 0)
		printf("두문자열이 같습니다.\n");
	else
		printf("두 문자영이 다릅니다.\n");

	if (strcmp(str1, str2) == 0)
		printf("두 문자열이 같습니다.\n");
	else
		printf("두문자열이 다릅니다.\n");

	return 0;
}