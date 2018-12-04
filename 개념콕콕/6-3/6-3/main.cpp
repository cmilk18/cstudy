/*20181104 강준희 인자와 리턴값을 갖는 함수의 호출 예*/
#include<stdio.h>

int getfactorial(int num)
{
	int i;
	int fact = 1;
	for (i = 1; i <= num; i++)
		fact *= i;
	return fact;

}

int getsum(int num)
{
	int i;
	int sum = 0;
	for (i = 1; i <= num; i++)
		sum += i;
	return sum;
}

int main(void)
{
	int result1, result2;

	result1 = getfactorial(10);
	printf("10 팩토리얼=%d\n", result1);

	result2 = getsum(100);
	printf("1~10의 합계 = %d\n", result2);

	return 0;
}