/*20181120 typedef�� ��� ��*/
#include <stdio.h>

struct point {
	int x;
	int y;
};

typedef struct point POINT;

int main(void)
{
	struct point pt1 = { 10,20 };
	POINT pt2;

	pt2 = pt1;
	printf("pt2�� ��ǥ : %d,%d\n", pt2.x, pt2.y);

	return 0;
}