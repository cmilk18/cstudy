/* 20181002 ������ while����*/
#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int a, b;
	char op;

	printf("������ �Է��ϼ��� (000 ����) : ");
	scanf("%d %c %d", &a, &op, &b);

	while (a != '0' || op != '0' || b != '0')
	{
		switch (op)
		{
		case '+':
			printf("%d + %d = %d\n", a, b, a + b);
			break;
		case '-':
			printf("%d - %d = %d/n", a, b, a - b);
			break;
		case '*':
			printf("%d * %d = %d\n", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d\n", a, b, a / b);
			break;
		default:
			printf("����� �� �����ϴ�.\n");
			break;

		}
		printf("������ �Է��ϼ��� (000 ����) : ");
		scanf("%d %c %d", &a, &op, &b);

	}
	return 0;
}