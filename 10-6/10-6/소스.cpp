/*20181127 �Լ��� ���ڷ� ����ü�� �����ϴ� ���*/
#include<stdio.h>

typedef struct point {
	int x;
	int y;
}POINT;

void printpoint(POINT *p);

int main(void)
{
	POINT pt1 = { 100,200 };
	printpoint(&pt1);

	return 0;
}

void printpoint(POINT *p)
{
	printf("(%d,%d)\n", p->x, p->y);
}