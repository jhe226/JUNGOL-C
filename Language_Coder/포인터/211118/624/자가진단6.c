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
배열의 크기를 입력받아 입력받은 크기만큼 실수 배열을 생성하고
배열의 원소를 입력받은 후 입력받은 자료 및 합과 평균을 반올림하여
소수 둘째자리까지 출력하는 프로그램을 작성하시오.
*/