/*20181013 강준희 첫번쨰c*/
#include<stdio.h>

void test(void);
int num = 10;

int main(void)
{
	int num = 20;

	while (1)
	{
		int num = 30;

		printf("num = %d\n", num++);

		if (num > 25)
			break;
	}
	printf("num = %d\n", num);

	test();

	return 0;

}

void test(void)
{
	printf("num = %d\n", num);
}