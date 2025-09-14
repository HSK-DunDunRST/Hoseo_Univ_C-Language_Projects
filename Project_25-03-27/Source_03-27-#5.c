#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	조건문 조건(문자형) 예제
*/

void main() {
	char grade = ' ';

	printf("학점을 입력하고 Enter를 누르십시오.>> ");
	scanf("%c", &grade);
	
	if (grade <= 'D') {
		printf("시험 합격\n");
	}
}