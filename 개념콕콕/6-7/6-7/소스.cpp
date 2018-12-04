/*20181013 ∞≠¡ÿ»Ò*/
#include<stdio.h>

void printcount(void);

int main(void)
{
	int count = 0;

	printf("main: count = %d\n", count);

	printcount();

	return 0;

}
void printcount(void)
{
	int count = 100;
	printf("printcount: count = %d\n", count);
}