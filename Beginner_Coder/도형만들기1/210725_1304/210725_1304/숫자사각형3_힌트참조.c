#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int n, i, j;
	int k = 1;
	int arr[101][101] = { 0, };
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			arr[j][i] = k++;
		}
	}

	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
}