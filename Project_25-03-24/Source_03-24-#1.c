#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
	int k = 0;
	int d = 1;

	printf("�� �ڸ� 10�� ���� �Է� �� Enter >>");
	scanf("%d", &k);

	printf("%d�� �ڸ��� %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d�� �ڸ��� %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d�� �ڸ��� %d\n", d, k % 10);

}