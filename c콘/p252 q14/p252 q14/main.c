/*20181002 ������ �������� ��*/
#include<stdio.h>

int main(void)
{
	int i, a=0, c=0;

	printf("������ �Է��ϼ���");
	scanf_s("%d", &i);

	for (c = 1; c <= i; c++)
		a += c * c;
		
	printf("%d", a);

	return 0;
}