#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch, *p1;
	int num, *p2;

	p1 = &p1;
	p2 = &num;

	printf("%d %d", p1, p2);
}