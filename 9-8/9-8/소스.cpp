/*20181120 열거체의 사용 예*/
#include <stdio.h>

enum week {sun, mon, tue, wed, thu, fri, sat};

int main(void)
{
	enum week weekday;

	weekday = tue;

	switch (weekday)
	{
	case sun:
		printf("일요일입니다.\n");
		break;
	case mon:
		printf("월요일입니다.\n");
		break;
	case tue:
		printf("수요일 입니다.\n");
		break;
	case wed:
		printf("수요일입니다.\n");
		break;
	case thu:
		printf("목요일입니다.\n");
		break;
	case fri:
		printf("금요일입니다.\n");
		break;
	case sat:
		printf("토요일입니다.\n");
		break;

	}
	return 0;
}