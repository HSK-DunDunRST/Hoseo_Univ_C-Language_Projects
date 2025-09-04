#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	조건문 (조건값 이상 이하) + else문
*/

void main() {
	int age = 0;
	printf("나이를 입력하고 엔터를 누르십시오.>> ");
	scanf("%d", &age);

	if (age >= 19) {
		printf("성인입니다.\n");
	}
	else {
		printf("미성년자입니다.\n");
	}
}