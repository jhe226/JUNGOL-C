#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int* p1, * p2;

	p1 = &a;
	p2 = &b;

	scanf("%d %d", p1, p2);

	printf("%d + %d = %d\n", *p1, *p2, (*p1) + (*p2));
	printf("%d - %d = %d\n", *p1, *p2, (*p1) - (*p2));
	printf("%d * %d = %d\n", *p1, *p2, (*p1) * (*p2));
	printf("%d / %d = %d\n", *p1, *p2, (*p1) / (*p2));

}