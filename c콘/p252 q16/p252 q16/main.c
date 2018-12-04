#include<stdio.h>
int main(void)
{
	int oil = 1000, spend = 0;
	char op;

	printf("초기연료량은 %d입니다.", oil);

	while (1)
	{
		printf("현재 남아있는 양은%d입니다. 연료 충천은 +, 연료소모는 -를 입력하세요.\n", oil);
		scanf_s("%c %4d", &op, &spend);

		switch (op)
		{
		case '+':
			oil = oil + spend;
		case '-':
			oil = oil - spend;
		}

		if (oil <= 10)
			printf("경고 연료부족");
	}
	return 0;
}