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
�迭�� ũ�⸦ �Է¹޾� �Է¹��� ũ�⸸ŭ �迭�� ������ �Է¹ް�
������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/