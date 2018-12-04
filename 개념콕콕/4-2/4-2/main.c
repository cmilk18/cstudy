/*20180918 강준희*/
#include <stdio.h>

int main(void)
{
	int num;
	int thousandes, tens;

	printf("6자리 정수를 입력하세요 :");
	scanf_s("%d", &num);

	thousandes = num / 1000;
	tens = num % 1000;
	printf("%d,%d\n", thousandes, tens);

	return 0;
}