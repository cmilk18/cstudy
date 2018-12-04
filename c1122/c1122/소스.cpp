#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void sec2time(void);
void distime(void);
int main(void)
{
	char ch;
	do {
		//system("cls");//화면 지우는 명령어
		printf("\n [MENU SYSTEM]\n\n");
		printf("1 sec to time \n");
		printf("2 speed to time \n");
		printf("3 Exit \n");
		printf("4 clear \n");
		switch (ch = getche()) {
		case '1':
			sec2time();
			break;
		case '2':
			distime();
			break;
		case '3':
			printf("\n\n bye~~~~\n");
			break;
		case '4':
			system("cls");
			break;
		}
		getch();

	} while (!strchr("3", ch));
	return 0;
}
void sec2time(void) {
	int in, hour, min, sec, tmp;
	printf("\n input sec : \n");
	scanf("%d", &in);
	tmp = in;
	hour = tmp / 3600;
	tmp = tmp % 3600;
	min = tmp % 60;
	sec = tmp % 60;
	printf("%d초 = %d시 %d분 %d초 입니다.\n", in, hour, min, sec);
}

void distime(void)
{
	int dis, speed, hour, min, sec;
	double tmp;
	printf("\n\n input distance[km] : ");
	scanf("%d", &dis);
	printf("input speed[km/h] : ");
	scanf("%d", &speed);
	tmp = dis / speed;
	hour = (int)tmp;
	tmp = tmp - hour;
	min = (int)(tmp * 60);
	sec = (int(tmp - min) * 60);
	printf("거리 %d[km], 속도 %d[km/h]=걸린시간은 %d시간 %d분 %d 초입니다.\n", dis, speed, hour, min, sec);
}