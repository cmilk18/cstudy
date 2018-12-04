/*20181113 point구조체의 정의및 사용예*/
#include<stdio.h>
#pragma warning(disable:4996)

struct point {
	int x, y;
};

int main(void)
{
	struct point pt1, pt2;

	printf("pt1의 x,y좌표를 입력하세요 : ");
	scanf("%d %d", &pt1.x, &pt1.y);

	printf("pt2의 x,y좌표를 입력하세요 : ");
	scanf("%d %d", &pt2.x, &pt2.y);

	if (pt1.x == pt2.x &&pt1.y == pt2.y)
		printf("두점의 위치가 같다\n");
	else
		printf("두점의 좌표가 다르다\n");

	return 0;
}