/* 20181002 ∞≠¡ÿ»Ò break*/
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			break;
		printf("%d", i);

	}
	printf("%d", i);

	return 0;
}