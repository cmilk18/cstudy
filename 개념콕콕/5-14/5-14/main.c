/*20181002 강준희 무한루프 구구단*/
#include<stdio.h>

int main(void)
{
	int num;
	int i;
	while (1)
	{
		printf("정수를 입력하세요 (ctrl+c 입력시 종료) : ");
		scanf_s("%d", &num);

		for (i = 1; i < 10; i++)
			printf(" %d * %d = %2d ", num, i, num * i);
		printf("\n");

	}
	return 0;
}