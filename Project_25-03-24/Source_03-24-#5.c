#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int a = 0;
	int b = 0;

	printf("���� �ΰ��� �Է��Ͻʽÿ�.\n");
	printf("�Է�>> ");
	scanf("%d %d", &a, &b);

	(a > b) ? printf("%d", a) : printf("%d", b);

	
}

