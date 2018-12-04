/*20181127 배열을 입력 인자로 전달하는 경우와 입출력인자로 전달하는 경우*/
#include<stdio.h>

void printarray(const int *arr, int size);
void sortarray(int *arr, int size);

int main(void)
{
	int x[5] = { 43,6,24,88,34 };
	int y[10] = { 12,35,7,45,78,22,98,77,1,28 };

	printf("x 배열 :");
	printarray(x, 5);
	sortarray(x, 5);
	printf("정렬후 : ");
	printarray(y, 10);

	return 0;
}

void printarray(const int *arr, int size)
{
	int i;

	//arr[0] = 100;
	for (i = 0; i < size; i++)
		printf("%d", arr[i]);
	printf("\n");
}

void sortarray(int *arr, int size)
{
	int i, j, index;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (arr[index] > arr[j])
				index = j;
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}