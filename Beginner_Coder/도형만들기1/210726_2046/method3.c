#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int c, i, j, k = 0;
	scanf("%d", &c);

	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			printf("%d ", i*j);
			k++;
			if (k % c == 0)printf("\n");
		}
	}
}