#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE 3

struct student {
	int num;
	char name[20];
	int weight;
	double height;
	double bmi;
	char mark;

};

int main(void)
{
	struct student s[SIZE];
	FILE *fp;
	int count = 0;
	double avg;


	fp = fopen("E:\\a1.txt", "r");

	if (fp == NULL)
	{
		printf("\n ���Ͽ��� ����\n");
		exit(1);
	}

	for (int i = 0; i < SIZE; i++)
	{
		fscanf(fp, "%d %s", &s[i].num, &s[i].name);
	}
	fclose(fp);

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		s[i].weight = (int)(rand() % 50 + 50);
		s[i].height = (double)(rand() % 100 + 100) / 100;
		s[i].bmi = s[i].weight / (s[i].height * s[i].height);

		if (s[i].bmi > 25 || s[i].bmi < 18.5)
		{
			s[i].mark = 'X';
		}
		else {
			s[i].mark = 'O';
			count++;
		}

	}

	printf("%d\n", s[0].weight);
	printf("%lf\n", s[0].height);
	printf("%lf\n", s[0].bmi);
	printf("%c\n", s[0].mark);


	avg = ((double)count) / SIZE;
	printf("�й�\t�̸�\t������\t����\tBMI\t�Ǵ�\n\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t %s\t %d\t %.2lf\t %.2lf\t %c\n",
			s[i].num, s[i].name, s[i].weight, s[i].height, s[i].bmi, s[i].mark);
	}

	printf("���� : %d �� \t ������ : %d �� \n ���� : %.2lf\n",
		count, SIZE - count, avg);

	printf("18.5 < BMI < 25 �� ��� ����\n\n");

	fp = fopen("E:\\b.txt", "w");
	if (fp == NULL)
	{
		printf("\n ���Ͽ��� ����\n");
		exit(1);
	}

	fprintf(fp, "�й�\t�̸�\t������\t����\tBMI\t�Ǵ�\n\n");

	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%d\t %s\t %d\t %.2lf\t %.2lf\t %c\n",
			s[i].num, s[i].name, s[i].weight, s[i].height, s[i].bmi, s[i].mark);


	}
	fprintf(fp, "���� : %d �� \t ������ : %d �� \n ���� : %.2lf\n",
		count, SIZE - count, avg);

	fclose(fp);

	return 0;


}