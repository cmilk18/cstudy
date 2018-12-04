/*20181013 강준희*/
#include<stdio.h>

int getfactorial(int num);
double getmax(double a, double b, double c );

int main(void)
{
	int i_res;
	double f_res;

	i_res = getfactorial(5);
	printf("5! = %d\n", i_res);

	f_res = getmax(0.5, 10.5, 12.5);
	printf("최대값 = %f\n", f_res);

	return 0;

}

int getfactorial(int num)
{
	int i;
	int fact = 1;
	for (i = 1; i <= num; i++)
		fact *= i;
	return fact;
}

double getmax(double a, double b, double c)
{
	double max;
	max = a > b ? a : b;
	max = c > max ? c : max;
	return max;
}