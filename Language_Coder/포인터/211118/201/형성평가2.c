#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n;
	int* p;

	p = &n;

	scanf("%d", p);

	for (int i = 0; i < (*p); i++)
	{
		printf("*");
	}
}

/*
������ ������ �����ϰ� ������ ������ ����Ͽ� 100 ������ ���� �Է¹��� ��
�Է¹��� ����ŭ ��*���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/