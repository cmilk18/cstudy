/*20181127 함수의 인자로 구조체를 전달하는 경우*/
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