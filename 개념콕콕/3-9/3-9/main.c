/*20180918 강준희*/
#include<stdio.h>

int main(void)
{
	float pi1 = 3.141592653589793;
	double pi2 = 3.141592653589793;

	printf("float 형의 pi값 : %f\n", pi1);
	printf("double 형의 pi값 : %f\n", pi2);

	printf("float 형의 pi값 : %30.25\n", pi1);
	printf("double 형의 pi값 : %30.25\n", pi2);

	return 0;


}