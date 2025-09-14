#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	형 변환 + if조건문 문제 
*/

void main() {

	double a = 0;

	printf("랜덤 숫자를 입력하십시오>> ");
	scanf("%lf", &a);

	if (a - (int)a > 0) {
		printf("소수점 이하 출력: %f\n", a - (int)a);
	}
	else if ((int)a % 2) {
		printf("정수이며 홀수입니다.\n");
	}
	else {
		printf("정수이며 짝수입니다.\n");
	}
	
}