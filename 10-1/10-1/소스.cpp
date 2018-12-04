/*20181127 값에 의한 전달 방법*/
#include<stdio.h>

void swap(int a, int b);

int main(void)
{
	 int a = 10;
	 int b = 20;

	 printf("swap 전의 a=%d,b=%d\n", a, b);

	 swap( a, b);

	 printf("swap 후의 a=%d,b=%d\n", a, b);

	 return 0;


}

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}