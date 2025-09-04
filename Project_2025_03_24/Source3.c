#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;

	printf("[정수 a를 입력하십시오.] >> ");

	scanf("%d", &a);
	
	printf("%d\n", a++);
	printf("%d\n", ++a);
	printf("%d\n", a--);
	printf("%d\n", --a);
}			  