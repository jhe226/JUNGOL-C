#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Point {
	int x1, y1, x2, y2, x3, y3;
	double c1, c2;
}p;

int main()
{

	scanf("%d %d %d %d %d %d", &p.x1, &p.y1, &p.x2, &p.y2, &p.x3, &p.y3);

	p.c1 = (double)(p.x1 + p.x2 + p.x3) / 3;
	p.c2 = (double)(p.y1 + p.y2 + p.y3) / 3;

	printf("(%.1f, %.1f)", p.c1, p.c2);
	
}