#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int s, e;
	scanf("%d %d", &s, &e);

	while ((s < 2 || s > 9) || (e < 2 || e > 9))
	{
		printf("INPUT ERROR!\n");
		scanf("%d %d", &s, &e);
	}

	if (s < e)
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = s; j <= e; j++)
			{
				if (i * j < 10)
				{
					printf("%d * %d =  %d", j, i, i * j);
				}

				else
				{
					printf("%d * %d = %d", j, i, i * j);
				}
				for (int k = 1; k <= 3; k++)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}

	else    // s > e
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int j = s; j >= e; j--)
			{
				if (i * j < 10)
				{
					printf("%d * %d =  %d", j, i, i * j);
				}

				else
				{
					printf("%d * %d = %d", j, i, i * j);
				}
				for (int k = 1; k <= 3; k++)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
}
