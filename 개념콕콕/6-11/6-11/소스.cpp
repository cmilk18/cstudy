/*20181013 ������ �Լ����̿� ����� ��������*/
#include <stdio.h>

void printcount(void);
void increment(void);
void decrement(void);
int count;

int main(void)
{
	count = 0;

	increment();
	printcount();

	return 0;
}


void printcount(void)
{
	printf("count = %d\n", count);
}

void intcrement(void)
{
	count++;
}

void decrement(void)
{
	count--;
}