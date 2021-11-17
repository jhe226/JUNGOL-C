#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int cnt1 = 0, cnt2 = 0;

	int* p = (int*)malloc(sizeof(int) * 10);

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &p[i]);

		if (p[i] % 2 != 0)
			cnt1++;
		else
			cnt2++;
	}

	printf("odd : %d\neven : %d\n", cnt1, cnt2);
}