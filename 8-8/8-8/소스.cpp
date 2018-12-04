/*20181113 문자열 포인터의 변경*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	const char *p = "abcde";

	printf("p=%s\n", p);
	printf("p=%p\n", p);
	printf("p=%p\n", "abcde");

	p = "hello";

	printf("p=%s\n", p);
	printf("p=%p\n", p);
	printf("p=%p\n", "abcde");

	

	return 0;


}