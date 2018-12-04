/*20181013 강준희 swap함수의 예*/
#include<stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("swap 전의 a =%d, b=%d\n", a, b);

	swap(a, b);

	printf("swap 후의 a= %d, b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}