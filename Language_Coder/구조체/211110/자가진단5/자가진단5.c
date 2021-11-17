#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct Student
{
	char name[20];
	int height;
}student;

int main()
{
	student s1[5];
	int min_height = 0;
	int min = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d", &s1[i].name, &s1[i].height);
	}

	min_height = s1[0].height;

	for (int i = 0; i < 5; i++)
	{
		if (min_height > s1[i].height)
		{
			min = i;
			min_height = s1[i].height;
		}
	}

	printf("%s %d\n", s1[min].name, s1[min].height);

	return 0;
}