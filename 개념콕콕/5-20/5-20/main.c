/*20181002 ������ return*/
#include<stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			return 1;
		printf("%d", i);
	}
	printf("���α׷��� ����.\n");

	return 0;
}