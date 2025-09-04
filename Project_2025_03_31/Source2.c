#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 0;

	printf("100미만 정수를 입력>> ");
	scanf("%d", &input);

	for (int i = input; i < 100; i++) {
		if (i % 2 == 0) {
			printf("짝수인 N값: %d\n", i);
		}
	}

}