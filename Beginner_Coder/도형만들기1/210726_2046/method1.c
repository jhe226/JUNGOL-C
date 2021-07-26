#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int a, i, j, k = 0;
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("%d ", i);
			k++;
			if (k % a == 0)printf("\n");
		}
	}
}