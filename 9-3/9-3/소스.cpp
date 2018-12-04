/*20181113 구조체간의 초기화 및 대입*/
#include <stdio.h>

struct point {
	int x, y;
};

int main(void)
{
	struct point pt1 = { 10,20 };
	struct point pt2 = { 30,40 };
	struct point pt3 = pt1;
	struct point pt4;

	printf("pt1의 좌표 %d,%d\n", pt1.x, pt1.y);
	printf("pt3의 좌표 %d,%d\n", pt3.x, pt3.y);
	if (pt1.x == pt3.x&&pt1.y == pt3.y)
		printf("pt1과pt3가 같다.\n");
	else
		printf("pt1과 pt3가 다르다\n");

	pt4 = pt2;

	printf("pt2의 좌표 %d,%d\n", pt2.x, pt2.y);
	printf("pt4의 좌표 %d,%d\n", pt4.x, pt4.y);
	if (pt1.x == pt3.x&&pt1.y == pt3.y)
		printf("pt2과pt4가 같다.\n");
	else
		printf("pt2과 pt4가 다르다\n");

	return 0;
}