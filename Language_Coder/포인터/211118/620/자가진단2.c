#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int* a;
	int b;

	a = &b;

	scanf("%d", a);

	printf("%d...%d\n", (*a) / 10, (*a) % 10);

}

/*
정수형 포인터를 이용하여 값을 입력받고 
입력받은 값을 10으로 나눈 몫과 나머지를 출력하는 프로그램을 작성하시오.
*/