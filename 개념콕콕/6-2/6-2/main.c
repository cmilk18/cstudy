/*20181013 ������*/
#include<stdio.h>
#pragma warning(disable:4996)

void printsumandaverage(int a, int b)
{
	printf("�԰� : %d\n", a + b);
	printf("��� : %f\n", (double)(a + b) / 2);

}

int main(void)
{
	int x, y;

	printsumandaverage(10, 20);

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &x, &y);
	printsumandaverage(x, y);

	return 0;
}