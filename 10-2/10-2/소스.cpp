/*20181127 포인터에 의한 전달 방법*/
#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("swap전의 a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("swap후의 a = %d,b=%d\n", a, b);
	return 0;
}

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}