#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, i, j;
	int a;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		a = i;
		for (j = 1; j <= n; j++)
		{
			printf("%d ", a);
			a += n;
		}
		printf("\n");
	}
}