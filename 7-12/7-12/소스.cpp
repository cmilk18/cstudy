/*20181106 문자열의 입출력*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	char name[20];

	printf("이름을 입력하세요 : ");
	scanf_s("%s",name);
	printf("%s씨,안념하세요?\n", name);

	return 0;
}