/*20180918 ������*/
#include <stdio.h>

int main(void)
{
	const double PI = 3.14;
	const int MAX_COUNT;

	printf("PI = %f\n", PI);
	printf("MAX_COUNT = %d\n", MAX_COUNT);

	PI = 3.1415; //const ������ ����Ұ�
	MAX_COUNT = 100; //const ������ ����Ұ�

	return 0;
}