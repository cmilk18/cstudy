/*20180930 강준희*/
#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int score;
	char grade;

	printf("점수를 입력하세요");
	scanf("%d", &score);

	if (score < 0 || score >100)
		printf("잘못입력하셨습니다.\n");

	else
	{
		if (score >= 90)
			grade = 'A';
		else if (score >= 80)
			grade = 'B';
		else if (score >= 70)
			grade = 'C';
		else if (score >= 60)
			grade = 'D';
		else
			grade = 'F';

		printf("%c학점입니다.\n", grade);
	}
	return 0;
}