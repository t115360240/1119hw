#include <stdio.h>
#include <stdlib.h>
int main() {
	int count=0;
	int a[4] = {10,9,11,12};
	for (int i = 0; i < 3; i++)
	{
		int swap = 0;
		for (int j = 0; j < 3-i;j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j+1];
				a[j+ 1] = a[j];
				a[j] = temp;
				swap = 1;
			}
		}
		if (swap == 0)
		{
			break;
		}
		count++;
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", a[i],count);
	}
	printf(" 比對輪數為%d輪", count);
}