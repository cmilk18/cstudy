/*20180918 강준희*/
#include<stdio.h>

int main(void)
{
	int num1, num2;
	int result;

	printf("두 개의 정수를 입력하세요 :");
	scanf_s("%d %d", &num1, &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	result = num1 - num2;
	printf("%d - %d = %d\n", num1, num2, result);

	result = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, result);

	result = num1 / num2;
	printf("%d + %d / %d\n", num1, num2, result);

	result = num1 % num2;
	printf("%d + %d %% %d\n", num1, num2, result);

	return 0;
}