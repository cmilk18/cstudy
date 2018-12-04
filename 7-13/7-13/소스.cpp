/*20181106 문자열의 입출력*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[20];
	char mag[40];

	printf("이름을 입력하세요 : ");
	gets(name);

	sprintf(msg, "%s씨 안녕하세요?", name);
	puts(msg);

	return 0;
}