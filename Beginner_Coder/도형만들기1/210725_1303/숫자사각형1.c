#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int m, n;
	int k = 0;
	scanf("%d %d", &n, &m);
	
	
		for (int j = 1; j <= m * n; j++)
		{
			printf("%d ", j);
			k++;
			if (k % m == 0)printf("\n");
		}
	}
}