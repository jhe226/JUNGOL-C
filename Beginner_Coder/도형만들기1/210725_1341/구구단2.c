#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int s, e;
	int cnt = 0;
	scanf("%d %d", &s, &e);

	while ((s < 2 || s > 9) || (e < 2 || e > 9))
	{
		printf("INPUT ERROR!\n");
		scanf("%d %d", &s, &e);
	}

	if (s < e)
	{
		for (int i = s; i <= e; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i * j < 10)
				{
					printf("%d * %d =  %d   ", i, j, i * j);
					cnt++;
					if (cnt % 3 == 0)printf("\n");
				}

				else
				{
					printf("%d * %d = %d   ", i, j, i * j);
					cnt++;
					if (cnt % 3 == 0)printf("\n");
				}
			}
			printf("\n");
		}
	}

	else    // s > e
	{
		for (int i = s; i >= e; i--)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (i * j < 10)
				{
					printf("%d * %d =  %d   ", i, j, i * j);
					cnt++;
					if (cnt % 3 == 0)printf("\n");
				}

				else
				{
					printf("%d * %d = %d   ", i, j, i * j);
					cnt++;
					if (cnt % 3 == 0)printf("\n");
				}
			}
			printf("\n");
		}
	}
}
