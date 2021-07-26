#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, m, i, j, k = 0;
	scanf("%d %d", &n, &m);

	switch (m)
	{
	case 1:
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				printf("%d ", i);
				k++;
				if (k % n == 0)printf("\n");
			}
		}
		break;
	case 2:
		for (int i = 1; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				for (int j = n; j >= 1; j--)
				{
					printf("%d ", j);
				}
				printf("\n");
			}
			else
			{
				for (int j = 1; j <= n; j++)
				{
					printf("%d ", j);
				}
				printf("\n");
			}

		}
		break;
	case 3:
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				printf("%d ", i * j);
				k++;
				if (k % n == 0)printf("\n");
			}
		}
		break;
	}
}