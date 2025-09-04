#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
	if(조건문) 예제
*/

void main() {
	int grade = 0;
	printf("성적 점수를 입력하고 엔터를 누르십시오.>> ");
	scanf("%d", &grade);

	if (grade > 70) {
		printf("시험에 합격되었습니다.\n");
	}
	else {
		printf("시험에 불합격 되었습니다.\n");
	}
}