#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	double hap = 0, avg = 0;

	scanf("%d", &n);
	double* p = (double*)malloc(sizeof(double) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &p[i]);
		printf("%.2f ", *(p + i));
		hap += *(p+i);
	}

	avg = hap / n;

	printf("\n");

	printf("hap : %.2f\n", hap);
	printf("avg : %.2f\n", avg);


	free(p);
}

/*
�迭�� ũ�⸦ �Է¹޾� �Է¹��� ũ�⸸ŭ �Ǽ� �迭�� �����ϰ�
�迭�� ���Ҹ� �Է¹��� �� �Է¹��� �ڷ� �� �հ� ����� �ݿø��Ͽ�
�Ҽ� ��°�ڸ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/