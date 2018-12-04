/*20180918 °­ÁØÈñ*/
#include <stdio.h>

int main(void)
{
	char grade = '\x41';
	int data = 0x7b;
	unsigned int age = 75U;
	long filesize = 1234567L;
	double area = 123.25;
	double taxrate = 25e-2;
	float temperature = 17.5F;
	printf("grade = %c\n", grade);
	printf("data = %d, %o, %x\n", data, data, data);
	printf("age = %u\n", age);
	printf("filesize=%d\n", filesize);
	printf("area = %f, %e, %g\n", area, area, area);
	printf("taxrate = %f\n", taxrate);
	printf("temperature = %f\n", temperature);

	return 0;
}