/*20180930 ������*/
#include<stdio.h>
int main()
{
	int score;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score < 60)
		printf("%d���� ���հ��Դϴ�.\n", score);

	if (score >= 60)
		printf("%d���� �հ��Դϴ�.\n", score);

	return 0;
}