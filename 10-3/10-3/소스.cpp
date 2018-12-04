/*20181127 출력 인자의 사용 예*/
#include <stdio.h>

void getsumproduct(int x, int y, int *sum, int *product);

int main(void)
{
	int a = 5, b = 8;
	int res1, res2;

	getsumproduct(a, b, &res1, &res2);

	printf("%d + %d = %d \n",a, b, res1);
	printf("%d*%d=%d\n", a, b, res2);
	return 0;
}

void getsumproduct(int x, int y, int *sum, int *product)
{
	*sum = x + y;
	*product = x * y;
}