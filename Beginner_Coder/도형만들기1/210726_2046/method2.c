#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, i, j, k = 0;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
			if (i % 2 == 0)
			{
				for (int j = a; j >= 1; j--)
				{
					printf("%d ", j);
				}
				printf("\n");
			}
			else
			{
				for (int j = 1; j <= a; j++)
				{
					printf("%d ", j);
				}
				printf("\n");
			}
		
	}
}