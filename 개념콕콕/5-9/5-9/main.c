/*181002������ for�հ�*/
#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int i;
	int sum = 0;
	int factorial = 1;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		factorial *= i;

	}
	printf("1~10�� �� : %d\n", sum);
	printf("1~10�� �� : %d\n", factorial);

	return 0;
}