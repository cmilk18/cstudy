/*20181120 ����ü�� ��� ��*/
#include <stdio.h>

union data {
	unsigned long dword;
	unsigned char byte[4];
};

int main(void)
{
	union data d1;
	int i;

	printf("data ����ü�� ũ�� :  %d\n", sizeof(union data));

	d1.dword = 0x12345678;
	for(i = 0; i < 4; i++)
		printf("d1.byte[%d]=%02x\n", i, d1.byte[i]);

	return 0;
}