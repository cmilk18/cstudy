#include<stdio.h>
#pragma warning(disable:4996)

int total(int kor, int eng);
double average(int tot);
int mark(double avg);

int main(void)
{
	int kor, eng;
	int tot;
	double avg;
	char m;
	int maj[50], num[50], name[50];
	printf("전공, 학번,이름,국어,영어점수를 입력하세요z.\n");
	scanf("%s %s %s %d %d", &maj, &num, &name, &kor, &eng);
	tot = total(kor, eng);
	avg = average(tot);
	m = mark(avg);
	printf("전공 %s\n학번%s\n 이름%s\n 국어%d\n 영어%d\n 합계%d\n 평균%f\n 학점%c\n", maj, num, name, kor, eng, tot, avg, m);
	return 0;
}

int total(int kor, int eng)
{
	int tot;
	tot = kor + eng;
	return tot;
}

double average(int tot)
{
	double avg;
	avg = (double)tot / 2;
	return avg;
}

int mark(double avg)
{
	int m;

	if (avg >= 90)
	{
		m = 'A';
	}
	else if (avg >= 80)
	{
		m = 'B';
	}
	else if (avg >= 70)
	{
		m = 'C';
	}
	else
		m = 'F';

	return m;
}

