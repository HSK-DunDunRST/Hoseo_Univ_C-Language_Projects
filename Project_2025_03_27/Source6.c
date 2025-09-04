#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	if ~ else if ~ else 문제
*/

void main() {

	int a = 0;
	int b = 0;
	int result = 0;

	printf("a와 b를 같이 입력하십시오. (띄어쓰기 구분)>> ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		result = a % b;
		printf("%d\n", result);
	} 
	else if (a < b) {
		result = b % a;
		printf("%d\n", result);

	}
	else {
		printf("같은 값을 입력했습니다.\n");
	}

}