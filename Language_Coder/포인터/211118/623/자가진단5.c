#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double a[5];
	double* p;

	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &a[i]);
	}

	p = a;

	for (int i = 0; i < 5; i++)
	{
		printf("%.1f ", *(p+i));
	}
}

/*
�Ǽ� 5���� ���ҷ� �ϴ� �迭�� �����ϰ� ������ ������ �̿��Ͽ� 
�Է°� ����� �����ϴ� ���α׷��� �ۼ��Ͻÿ� 
����� �ݿø��Ͽ� �Ҽ� ù°�ڸ����� ����ϴ� ������ �Ѵ�.
*/