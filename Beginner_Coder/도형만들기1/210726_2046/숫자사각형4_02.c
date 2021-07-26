#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int method1(int a) {
	int i, j, k = 0;
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

int method2(int b) {
	int i, j, k = 0;
	for (int i = 1; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = b; j >= 1; j--)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= b; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}

	}
}

int method3(int c) {
	int i, j, k = 0;
	for (int i = 1; i <= c; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			printf("%d ", i * j);
			k++;
			if (k % c == 0)printf("\n");
		}
	}
}

int main()
{
	int n, m, i, j, k = 0;
	scanf("%d %d", &n, &m);

	switch (m)
	{
	case 1:
		method1(n);
		break;
	case 2:
		method2(n);
		break;
	case 3:
		method3(n);
		break;
	}

}
