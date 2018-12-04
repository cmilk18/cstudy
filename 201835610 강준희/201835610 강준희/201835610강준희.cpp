#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int opening();
void result();
struct student {
	char name[20];
	int kor;
	int eng;
	int tot;
	double avg;
};
int main()
{
	int num1;
	struct student s[SIZE];
	while (1) {
		num1 = opening();
		switch (num1) {
		case 1:
			result();
		case 2:
			return 1;
		}
	}

	return 0;
}
int opening()
{
	int menu_num;
	printf("\n\t============================================================\n");
	printf("\n\t[성적처리기]\n");
	printf("1.시작\n");
	printf("2.종료\n");
	printf("\n\t============================================================\n");
	printf("입력하세요.\n");
	scanf("%d", &menu_num);
	return menu_num;

}
void result()
{
	FILE *fp;
	struct student s[SIZE];
	int kor;
	int eng;
	int tot = 0;
	int i;
	double avg;
	fp = fopen("E:\\a1.txt", "w");
	if (fp == NULL)
	{
		printf("%s 파일없음\n", fp);
		exit(1);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d번 학생의 국어 영어 점수를 입력하세요\n", i);
		printf("국어 영어 점수입력:\n");
		scanf("%d%d", &s[i].kor, &s[i].eng);
		fprintf(fp, "%d%d", s[i].kor, s[i].eng);
		printf("국어:%d,영어:%d\n", s[i].kor, s[i].eng);
		s[i].tot = s[i].kor + s[i].eng;
		s[i].avg = s[i].tot / 2;
	}

	fclose(fp);

	fp = fopen("E:\\b.txt", "w");
	fprintf(fp, "총점 리스트\n");
	for (i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%d \n", s[i].tot);
	}
	fclose(fp);

	fp = fopen("E:\\c.txt", "w");
	fprintf(fp, "평균 리스트\n");
	for (i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%f \n", s[i].avg);
	}
	fclose(fp);

}