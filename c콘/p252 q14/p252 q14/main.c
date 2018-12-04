/*20181002 강준희 제곱수의 합*/
#include<stdio.h>

int main(void)
{
	int i, a=0, c=0;

	printf("정수를 입력하세여");
	scanf_s("%d", &i);

	for (c = 1; c <= i; c++)
		a += c * c;
		
	printf("%d", a);

	return 0;
}