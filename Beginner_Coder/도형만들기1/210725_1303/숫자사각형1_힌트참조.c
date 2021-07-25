#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int m, n;
	int num = 1;
	scanf("%d %d", &n, &m);


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}

}