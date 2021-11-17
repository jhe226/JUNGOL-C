#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a;
	int* b;

	scanf("%d", &a);

	b = &a;

	printf("%#p %d\n", b, *b);
}

/*
정수형 변수와 포인터 변수를 선언하고 정수를 입력받아 포인터 변수를 이용하여
정수형 변수의 메모리 주소와 값을 출력하는 프로그램을 작성하시오.


주소 출력은 "%#p"를 이용하시오. 
아래는 메모리 주소가 "0X11110000"이라고 가정했을 때이다.
*/