#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	int* p1 = (int*)malloc(sizeof(int));
	int* p2 = (int*)malloc(sizeof(int));
	int* p3 = (int*)malloc(sizeof(int));

	scanf("%d %d", p1, p2);
	
	*p3 = abs(*p1 - *p2);

	printf("%d\n", *p3);


	free(p1);
	free(p2);
	free(p3);
}