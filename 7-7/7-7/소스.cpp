/*20181106 문자배열의 선언및 사용 예*/
#include <stdio.h>

int main(void)
{
	char str1[4] = "abc";
	char str2[10] = "12345";
	char str3[] = "Hello World";

	printf("str1=%s\n", str1);
	printf("str2=%s\n", str2);
	printf("str3=%s\n", str3);

	return 0;
}