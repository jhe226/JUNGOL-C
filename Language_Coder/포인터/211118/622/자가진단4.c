#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[5];
	int* p;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	p = a;

	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 1)
			continue;
		else 
			printf("%d ", *(p + i));
	}
}