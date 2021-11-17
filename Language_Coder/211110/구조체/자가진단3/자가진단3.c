#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

struct Student {
	char name[20];
	int korean;
	int english;
};

int main()
{
	struct Student s1;
	struct Student s2;

	int avg1;
	int avg2;
	
	scanf("%s %d %d", &s1.name, &s1.korean, &s1.english);
	scanf("%s %d %d", &s2.name, &s2.korean, &s2.english);

	avg1 = (s1.korean + s2.korean) / 2;
	avg2 = (s1.english + s2.english) / 2;

	printf("%s %d %d\n", s1.name, s1.korean, s1.english);
	printf("%s %d %d\n", s2.name, s2.korean, s2.english);
	printf("avg %d %d\n", avg1, avg2);
}