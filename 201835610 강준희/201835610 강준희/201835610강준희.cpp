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
	printf("\n\t[����ó����]\n");
	printf("1.����\n");
	printf("2.����\n");
	printf("\n\t============================================================\n");
	printf("�Է��ϼ���.\n");
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
		printf("%s ���Ͼ���\n", fp);
		exit(1);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d�� �л��� ���� ���� ������ �Է��ϼ���\n", i);
		printf("���� ���� �����Է�:\n");
		scanf("%d%d", &s[i].kor, &s[i].eng);
		fprintf(fp, "%d%d", s[i].kor, s[i].eng);
		printf("����:%d,����:%d\n", s[i].kor, s[i].eng);
		s[i].tot = s[i].kor + s[i].eng;
		s[i].avg = s[i].tot / 2;
	}

	fclose(fp);

	fp = fopen("E:\\b.txt", "w");
	fprintf(fp, "���� ����Ʈ\n");
	for (i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%d \n", s[i].tot);
	}
	fclose(fp);

	fp = fopen("E:\\c.txt", "w");
	fprintf(fp, "��� ����Ʈ\n");
	for (i = 0; i < SIZE; i++)
	{
		fprintf(fp, "%f \n", s[i].avg);
	}
	fclose(fp);

}