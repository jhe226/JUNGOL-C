#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

#define Max_size 80001

int stack[Max_size] = { 0, };

int top = -1;
long long cnt = 0;


int main()
{
	int num;
	int item;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &item);
		top++;
		while (item >= stack[top - 1] && top > 0)
		{
			top--;
		}
		stack[top] = item;
		cnt = cnt + top;
	}
	printf("%lld", cnt);
}