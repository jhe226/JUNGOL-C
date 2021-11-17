#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, tmp;
	scanf("%d", &n);

	int* p = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i] < p[j])
			{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", p[i]);
	}

	free(p);
}


/*
배열의 크기를 입력받아 입력받은 크기만큼 배열에 정수를 입력받고
내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
*/