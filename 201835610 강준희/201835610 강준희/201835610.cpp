#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define SIZE 10
struct student {
	char name[20];
	int c;
	int jav;
	int lin;
	int dat;
	double avg;
	int tot = 0;
	int rank;
	char Mark;

};
int main() {
	struct student s[SIZE];
	int i, u;
	FILE *fp;
	int csum = 0;
	double cavg = 0;
	fp = fopen("E:\\a.txt", "r");
	if (fp == NULL)
	{
		printf("파일없음");
		exit(1);

	}
	for (i = 0; i < SIZE; i++)
	{
		fscanf(fp, "%s %d %d %d %d", &s[i].name, &s[i].c, &s[i].jav, &s[i].lin, &s[i].dat);
		s[i].tot = s[i].c + s[i].jav + s[i].lin + s[i].dat;
		s[i].avg = s[i].tot / 4;
		csum += s[i].tot;
		cavg = csum / 40;

		if (s[i].avg >= 90)
		{
			s[i].Mark = 'A';
		}
		else
			s[i].Mark = 'F';
	}
	fclose(fp);

	for (i = 0; i < SIZE; i++)
	{
		s[i].rank = 1;
		for (u = 0; u < SIZE; u++)
		{
			if (s[i].avg < s[u].avg)
				s[i].rank++;
		}
	}
	fp = fopen("E:\\b.txt", "w");
	if (fp == NULL)
	{
		printf("파일없음");
		exit(1);
	}
	fprintf(fp, "이름 c  java   linux  database 총점 등수\n");
	fprintf(fp, "========================================\n");
	for (i = 0; i < SIZE; i++) {
		fprintf(fp, "%s %d %d %d %d %d %f %2d %c \n", s[i].name, s[i].c, s[i].jav, s[i].lin, s[i].dat, s[i].tot, s[i].avg, s[i].rank, s[i].Mark);
	}
	fprintf(fp, "학과총점 : %d , 학과평균 : %f ", csum, cavg);
	fclose(fp);
	printf("파일출력완료\n");

}