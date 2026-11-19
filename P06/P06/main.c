#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
	int a[SIZE];
	int i;
	printf("%s%13s\n", "Element", "Value");
	for (i = 0; i < 10; i++)
	{
		a[i] = 2 + 2 * i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%7d%13d\n", i, a[i]);
	}
}