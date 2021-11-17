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
실수 5개를 원소로 하는 배열을 선언하고 포인터 변수를 이용하여 
입력과 출력을 실행하는 프로그램을 작성하시오 
출력은 반올림하여 소수 첫째자리까지 출력하는 것으로 한다.
*/