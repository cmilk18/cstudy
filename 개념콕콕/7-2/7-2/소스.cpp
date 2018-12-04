/*20181106 잘못된 인덱스의 사용 예 */
#include<stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };;
	int i;

	for (i = 0; i < 5; i++)
		printf("arr[%d]=%d\n", i, arr[i]);

	return 0;
}