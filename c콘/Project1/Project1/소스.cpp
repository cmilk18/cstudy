#include <stdio.h>
#include <stdlib.h>   //rand(),srand()를 위한 해더 파일포함
#include <time.h>     //time()을 위한 해더 파일 포함
#pragma warning(disable:4996)

#define MAX 3

const char *name[] = { "가위", "바위", "보" };

int systemgame();
int decision(int sysme, int you);

int main(void)
{					  //메인 함수 시작
	int draw = 1;
	int sysme, you;

	srand(time(NULL));

	while (draw) {
		printf("가위(0) 바위(1) 보(2) 중에서 하나 입력 -> ");
		scanf("%d", &you);

		if (!(0 <= you && you <= 2)) {
			printf("잘못 입력했습니다. 다시 입력하세요.\n\n");
			continue;
		}

		sysme = systemgame();
		printf("당신은 %s이고, ", name[you]);
		printf("시스템은 %s입니다.\n", name[sysme]);

		if (you == sysme) {
			printf("비겼습니다. 다시 하세요.\n\n");
		}
		else {
			draw = 0;
		}
	}

	printf("\n%s의 승리입니다.\n", decision(sysme, you) ? "당신" : "컴퓨터");

	return 0;
}               //메인 종료

int systemgame()
{
	int number;

	number = rand() % MAX;

	return number;
}

int decision(int sysme, int you)
{
	int win;

	if (sysme == 0) {
		if (you == 1) {
			win = 1;
		}
		else {
			win = 0;
		}
	}
	else if (sysme == 1) {
		if (you == 0) {
			win = 0;
		}
		else {
			win = 1;
		}
	}
	else if (sysme == 2) {
		if (you == 1) {
			win = 1;
		}
		else {
			win = 0;
		}
	}

	return win;
}




