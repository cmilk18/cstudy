/*20181002 ������ ���ѷ��� ������*/
#include<stdio.h>

int main(void)
{
	int num;
	int i;
	while (1)
	{
		printf("������ �Է��ϼ��� (ctrl+c �Է½� ����) : ");
		scanf_s("%d", &num);

		for (i = 1; i < 10; i++)
			printf(" %d * %d = %2d ", num, i, num * i);
		printf("\n");

	}
	return 0;
}