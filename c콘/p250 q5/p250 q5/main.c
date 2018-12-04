/* 20181002 *Âï±â */
#include<stdio.h>

int main(void)
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{	
		printf("\n");
		for (j = 1; j <= 7; j++)
		{
			if (j <= i)
				printf("%d", j);
			else
				printf("*");
		}
	}
	return 0;
}