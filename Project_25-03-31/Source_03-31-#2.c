#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 0;

	printf("100�̸� ������ �Է�>> ");
	scanf("%d", &input);

	for (int i = input; i < 100; i++) {
		if (i % 2 == 0) {
			printf("¦���� N��: %d\n", i);
		}
	}

}