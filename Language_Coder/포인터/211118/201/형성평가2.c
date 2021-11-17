#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int* p;

	p = &n;

	scanf("%d", p);

	for (int i = 0; i < (*p); i++)
	{
		printf("*");
	}
}

/*
정수형 변수를 선언하고 포인터 변수를 사용하여 100 이하의 수를 입력받은 후
입력받은 수만큼 ‘*’을 출력하는 프로그램을 작성하시오.
*/