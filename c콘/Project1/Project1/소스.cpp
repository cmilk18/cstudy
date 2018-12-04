#include <stdio.h>
#include <stdlib.h>   //rand(),srand()�� ���� �ش� ��������
#include <time.h>     //time()�� ���� �ش� ���� ����
#pragma warning(disable:4996)

#define MAX 3

const char *name[] = { "����", "����", "��" };

int systemgame();
int decision(int sysme, int you);

int main(void)
{					  //���� �Լ� ����
	int draw = 1;
	int sysme, you;

	srand(time(NULL));

	while (draw) {
		printf("����(0) ����(1) ��(2) �߿��� �ϳ� �Է� -> ");
		scanf("%d", &you);

		if (!(0 <= you && you <= 2)) {
			printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n\n");
			continue;
		}

		sysme = systemgame();
		printf("����� %s�̰�, ", name[you]);
		printf("�ý����� %s�Դϴ�.\n", name[sysme]);

		if (you == sysme) {
			printf("�����ϴ�. �ٽ� �ϼ���.\n\n");
		}
		else {
			draw = 0;
		}
	}

	printf("\n%s�� �¸��Դϴ�.\n", decision(sysme, you) ? "���" : "��ǻ��");

	return 0;
}               //���� ����

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




