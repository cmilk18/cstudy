/*20181013 ������ swap�Լ��� ��*/
#include<stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10;
	int b = 20;

	printf("swap ���� a =%d, b=%d\n", a, b);

	swap(a, b);

	printf("swap ���� a= %d, b=%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}