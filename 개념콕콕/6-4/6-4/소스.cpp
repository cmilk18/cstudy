/*20181104 */
#include<stdio.h>

double getmax(double a, double b, double c)
{
	double max;
	max = a > b ? a : b;
	max = c > max ? c : max;
	return max;
}

int main(void)
{
	double x, y, z;
	double result;

	printf("�� ���� �Ǽ��� �Է��ϼ��� : ");
	scanf_s("%lf%lf%lf", &x, &y, &z);
	result = getmax(x, y, z);
	printf("result = %f\n", result);

	//result = getmax(0.5, 10.5);
	//result = getmax(0.5, 10.5, 12.5, 1.5);

	return 0;
}