/*20180918 ������*/
#include <stdio.h>

int main(void)
{
	int num;
	int thousandes, tens;

	printf("6�ڸ� ������ �Է��ϼ��� :");
	scanf_s("%d", &num);

	thousandes = num / 1000;
	tens = num % 1000;
	printf("%d,%d\n", thousandes, tens);

	return 0;
}