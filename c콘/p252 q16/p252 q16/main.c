#include<stdio.h>
int main(void)
{
	int oil = 1000, spend = 0;
	char op;

	printf("�ʱ⿬�ᷮ�� %d�Դϴ�.", oil);

	while (1)
	{
		printf("���� �����ִ� ����%d�Դϴ�. ���� ��õ�� +, ����Ҹ�� -�� �Է��ϼ���.\n", oil);
		scanf_s("%c %4d", &op, &spend);

		switch (op)
		{
		case '+':
			oil = oil + spend;
		case '-':
			oil = oil - spend;
		}

		if (oil <= 10)
			printf("��� �������");
	}
	return 0;
}