#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;
	int division = 0;
	int mod = 0;

	printf("���� a�� �Է��Ͻʽÿ� >>");
	scanf("%d", &a);

	printf("���� b�� �Է��Ͻʽÿ� >>");
	scanf("%d", &b);

	division = a / b;
	mod = a % b;

	printf("\n���� %d�̰� �������� %d�Դϴ�..\n", division, mod);
}