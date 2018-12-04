/*20181002 ∞≠¡ÿ»Ò goto*/
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			goto exit;
		printf("%d", i);
	}
exit:
	printf("\n");

	return 0;
}