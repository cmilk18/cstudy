/*20181106*/
#include<stdio.h>
int swap3(int *num1, int *num2, int *num3)
{

	int tmp=0;
	tmp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = tmp;
	return *num1, *num2, *num3;
}

int main()
{
	int num1=1, num2=2, num3=3;
	swap3(&num1,&num2,&num3);
	printf("%d%d%d", num1, num2, num3);
	return 0;

}