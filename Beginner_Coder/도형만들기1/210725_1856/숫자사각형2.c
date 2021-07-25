#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int m, n;
	int k = 0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= m; j++)
			{
				printf("%d ", i * m + j);
			}
			printf("\n");
		}

		else
		{
			for (int j = m; j >= 1; j--)
			{
				printf("%d ", i * m + j);
			}
			printf("\n");
		}
	}
}
