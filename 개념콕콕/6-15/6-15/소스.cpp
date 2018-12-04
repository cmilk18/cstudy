/*20181013 ∞≠¡ÿ»Ò*/
#include<stdio.h>

void getsmallerandlarger(int a, int b, int smaller, int larger);

int main(void)
{
	int smaller = 0, larger = 0;

	getsmallerandlarger(10, 20, smaller, larger);

	printf("smaller = %d, larger = %d\n", smaller, larger);

	return 0;
}

void getsmallerandlarger(int a, int b, int smaller, int larger)
{
	smaller = a < b ? a : b;
	larger = a > b ? a : b;
}