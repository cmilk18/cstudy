/*20181013 ������ ���������� ����׻��*/
#include<stdio.h>

void printcount(void);
void increment(void);
void decrement(void);

int count;

int main(void)
{
	count = 0;

	printcount();
	increment();
	increment();
	printcount();

	decrement();
	printcount();

	return 0;
}

void printcount(void)
{
	printf("count = %d\n", count);

}

void increment(void)
{
	count++;
}

void decrement(void)
{
	count--;
}