#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

typedef struct Student
{
	char name[20];
	char school[20];
	int grade;

}student;


int main()
{
	student s1;

	/*
		strcpy_s(s1.name, sizeof(s1.name),"Songjunhyuk");
		strcpy_s(s1.school, sizeof(s1.school), "Beolmal");
		s1.grade = 6;
	*/

	scanf("%s %s %d", &s1.name, &s1.school, &s1.grade);

	printf("Name : %s\n", s1.name);
	printf("School : %s\n", s1.school);
	printf("Grade : %d\n", s1.grade);
}