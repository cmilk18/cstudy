#include<stdio.h>
#pragma warning(disable:4996)

int total(int kor, int eng);
int average(int tot);
int mark(int avg);

int main()
{
	int kor, eng;
	int tot;
	int avg;
	int m;
	int maj[50], num[50], name[50];

	printf("전공,학번,이름,국어,영어점수를 입력하세요\n");
	scanf("%s%s%s%d%d", &maj, &num, &name,&kor,&eng);
	tot = total(kor, eng);
	avg = average(tot);
	m = mark(avg);
	printf("전공%s\n학번%s\n이름%s\n국어%d\n영어%d\n총점%d\n평균%d\n학점%c\n", maj, num, name, kor, eng, tot, avg, m);
	return 0;

}

int total(int kor, int eng)
{
	int tot;
	tot = kor + eng;
	return tot;
}

int average(int tot)
{
	int avg;
	avg = tot / 2;
	return avg;
}

int mark(int avg)
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