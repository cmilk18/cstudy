/*20181120 ������*/
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define MAX_PRODUCT 5

struct product {
	char name[20];
	int price;
	int stock;
};

int main(void)
{
	product prd[MAX_PRODUCT];
	int i;

	printf("%d ���� ��ǰ ������ �Է��ϼ���. \n", MAX_PRODUCT);
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("��ǰ�� : ");
		scanf("%s", prd[i].name);
		printf("����, ��� : ");
		scanf("%d %d", &prd[i].price, &prd[i].stock);
		 
	}
	printf("\n ��ǰ��                 ����             ���\n");
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("%-20s %8d %10d", prd[i].name, prd[i].price, prd[i].stock);
		if (prd[i].stock < 10)
			printf("==> ������! �ֹ��ʿ�!\n");
		else
			printf("\n");
	}
	return 0;
}