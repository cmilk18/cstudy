#include<stdio.h>
#pragma warning(disable:4996)

int total(int a,int b);

int main()
{
	int a, b;
	int tot;
	printf("두수를 입력하세요\n");
	scanf("%d%d", &a, &b);
	tot = total(a,b);
	printf("총합은%d입니다.", &tot);
	return 0;
}

int total(int a,int b)
{
	int tot;
	tot = a + b;
	return tot;

}