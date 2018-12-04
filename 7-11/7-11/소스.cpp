/*20181106 strcat 함수의 사용예*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20] = "abcde";

	strcat_s(str, "12345");

	printf("str = %s\n", str);

	return 0;
}