#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int input = 0;
	int sum = 0;
	printf("���� N�� �Է�>> ");
	scanf("%d", &input);

	printf("1���� N������ ���� ���\n");
	for (int i = 0; i < input; i++) {
		sum += (i + 1);
		printf("%d  ", i + 1);
	}
	printf("\n");
	printf("1���� N������ ��: %d\n", sum);
}