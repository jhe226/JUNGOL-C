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
������ �����͸� �̿��Ͽ� ���� �Է¹ް� 
�Է¹��� ���� 10���� ���� ��� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/