/*20180930 강준희*/
#include<stdio.h>
int main()
{
	int score;

	printf("점수를 입력하세요 : ");
	scanf_s("%d", &score);

	if (score < 60)
		printf("%d점은 불합격입니다.\n", score);

	if (score >= 60)
		printf("%d점은 합격입니다.\n", score);

	return 0;
}