/*20181127 �Լ��� ���ڷ� �迭�� �����ϴ� ����� ��*/
#include <stdio.h>

void printarray(int *arr, int size);
int getsumofarray(int *arr, int size);

int main(void)
{
	int x[5] = { 10,20,30,40,50 };
	int y[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("x�迭 : ");
	printarray(x, 5);
	printf("�հ� : %d \n\n", getsumofarray(x, 5));

	printf("y�迭 : ");
	printarray(y, 10);
	printf("�հ� : %d \n\n", getsumofarray(y, 10));

	printf("y�迭�� �Ϻκ� : ");
	printarray(y+2, 5);
	printf("�հ� : %d \n\n", getsumofarray(y+2, 5));

	return 0;

}

void printarray(int *arr, int size)
{
	int i; 
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");

}

int getsumofarray(int *arr, int size)
{
	int i;
	int total;

	for (i = 0, total = 0; i < size; i++)
	{
		total += arr[i];
	}

	return total;
}