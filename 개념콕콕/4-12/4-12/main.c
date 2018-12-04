/*20180930 °­ÁØÈñ*/
#include<stdio.h>

int main()
{
	int num;
	float f;

	f = 10 / 3;
	printf("f=%f\n", f);

	f = (float)10 / 3;
	printf("f=%f\n", f);

	f = (float)10 / (float)3;
	printf("f=%f\n", f);

	num = (int)(12.5 + 10.7);
	printf("num=%d\n", num);

	num = (int)12.5 + (int)10.7;
	printf("num = %d\n", num);

	return 0;
}