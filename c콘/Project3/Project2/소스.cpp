#include<stdio.h>
#pragma warning(disable:4996)

int total(int a,int b);

int main()
{
	int a, b;
	int tot;
	printf("�μ��� �Է��ϼ���\n");
	scanf("%d%d", &a, &b);
	tot = total(a,b);
	printf("������%d�Դϴ�.", &tot);
	return 0;
}

int total(int a,int b)
{
	int tot;
	tot = a + b;
	return tot;

}