/*20181120 ����ü�� ��� ��*/
#include <stdio.h>

enum week {sun, mon, tue, wed, thu, fri, sat};

int main(void)
{
	enum week weekday;

	weekday = tue;

	switch (weekday)
	{
	case sun:
		printf("�Ͽ����Դϴ�.\n");
		break;
	case mon:
		printf("�������Դϴ�.\n");
		break;
	case tue:
		printf("������ �Դϴ�.\n");
		break;
	case wed:
		printf("�������Դϴ�.\n");
		break;
	case thu:
		printf("������Դϴ�.\n");
		break;
	case fri:
		printf("�ݿ����Դϴ�.\n");
		break;
	case sat:
		printf("������Դϴ�.\n");
		break;

	}
	return 0;
}