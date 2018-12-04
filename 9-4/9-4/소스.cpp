/*20181120 강준희*/
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

	printf("%d 개의 상품 정보를 입력하세요. \n", MAX_PRODUCT);
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("상품명 : ");
		scanf("%s", prd[i].name);
		printf("가격, 재고량 : ");
		scanf("%d %d", &prd[i].price, &prd[i].stock);
		 
	}
	printf("\n 상품명                 가격             재고량\n");
	for (i = 0; i < MAX_PRODUCT; i++)
	{
		printf("%-20s %8d %10d", prd[i].name, prd[i].price, prd[i].stock);
		if (prd[i].stock < 10)
			printf("==> 재고부족! 주문필요!\n");
		else
			printf("\n");
	}
	return 0;
}