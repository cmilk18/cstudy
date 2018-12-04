/*20180918 강준희*/
#include <stdio.h>

int main(void)
{
	const double PI = 3.14;
	const int MAX_COUNT;

	printf("PI = %f\n", PI);
	printf("MAX_COUNT = %d\n", MAX_COUNT);

	PI = 3.1415; //const 변수는 변경불가
	MAX_COUNT = 100; //const 변수는 변경불가

	return 0;
}