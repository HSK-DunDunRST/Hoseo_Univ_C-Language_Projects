#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;
	int division = 0;
	int mod = 0;

	printf("정수 a를 입력하십시오 >>");
	scanf("%d", &a);

	printf("정수 b를 입력하십시오 >>");
	scanf("%d", &b);

	division = a / b;
	mod = a % b;

	printf("\n몫은 %d이고 나머지는 %d입니다..\n", division, mod);
}