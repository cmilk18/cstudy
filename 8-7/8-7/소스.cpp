/*20181113 문자열 리터럴의 의미*/
#include<stdio.h>
#include<string.h>

int main(void)
{
	const char *p = "abcde";

	printf("p=%s\n", p);
	printf("p=%p\n", p);
	printf("p=%p\n", "abcde");

	//p[0] = 'A';
	//strcpy(p, "hello");

	return 0;
}