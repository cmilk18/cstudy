/*20181106 strcat �Լ��� ��뿹*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char str[20] = "abcde";

	strcat_s(str, "12345");

	printf("str = %s\n", str);

	return 0;
}