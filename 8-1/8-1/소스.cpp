/*20181113 �����ͺ����� ���������� ũ��*/
#include <stdio.h>

int main(void)
{
	char *pc;
	int *pi;
	double *pd;

	printf("pc�� ũ�� : %d\n", sizeof(pc));
	printf("pi�� ũ�� : %d\n", sizeof(pi));
	printf("pd�� ũ�� : %d\n", sizeof(pd));

	printf("char*�� ũ�� : %d\n", sizeof(char*));
	printf("short*�� ũ�� : %d\n", sizeof(short*));
	printf("int*�� ũ�� : %d\n", sizeof(int*));
	printf("float*�� ũ�� : %d\n", sizeof(float*));
	printf("double*�� ũ�� : %d\n", sizeof(double*));

	return 0;
}