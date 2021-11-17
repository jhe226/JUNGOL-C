#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct Student
{
	char name[20];
	int height;
	float weight;
}student;

int main()
{
	student s1[5];
	student tmp;

	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d %.1f", &s1[i].name, &s1[i].height, &s1[i].weight);
	}

	printf("name\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			if (strcmp(s1[j - 1].name, s1[j].name) > 0) {
				tmp = s1[j - 1];
				s1[j - 1] = s1[j];
				s1[j] = tmp;
			}
		}
	}


	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %.1f", s1[i].name, s1[i].height, s1[i].weight);
	}


	printf("weight\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; (j + i) < 4; j++)
		{
			if (s1[i].weight > s1[j + 1].weight)
			{
				tmp = s1[j - 1];
				s1[j - 1] = s1[j];
				s1[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %.1f", s1[i].name, s1[i].height, s1[i].weight);
	}
}