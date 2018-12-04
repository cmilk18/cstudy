/*20181106 문자열배열의 선언및사용예*/
#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main(void)
{
	char s[3][5];
	int i;

	strcpy(s[0], "ab");
	strcpy(s[1], "cdef");
	strcpy(s[2], "ghi");

	s[2][0] = 'g';
	for (i = 0; i < 3; i++)
		printf("%s 문자열의 길이 : %d\n", s[i], strlen(s[i]));

	return 0;
}