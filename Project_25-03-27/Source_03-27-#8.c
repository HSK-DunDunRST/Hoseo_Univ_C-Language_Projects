#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	switch ~ case�� ����
*/

void main() {
	int a = 0;

	printf("�Է�>> ");
	scanf("%d", &a);

	switch (a) {
		case 1:
			printf("��");
		case 2:
			printf("��");
		case 3:
			printf("����");
	}
}