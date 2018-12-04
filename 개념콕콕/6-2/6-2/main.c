/*20181013 강준희*/
#include<stdio.h>
#pragma warning(disable:4996)

void printsumandaverage(int a, int b)
{
	printf("함계 : %d\n", a + b);
	printf("평균 : %f\n", (double)(a + b) / 2);

}

int main(void)
{
	int x, y;

	printsumandaverage(10, 20);

	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &x, &y);
	printsumandaverage(x, y);

	return 0;
}