#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	�� ��ȯ + if���ǹ� ���� 
*/

void main() {

	double a = 0;

	printf("���� ���ڸ� �Է��Ͻʽÿ�>> ");
	scanf("%lf", &a);

	if (a - (int)a > 0) {
		printf("�Ҽ��� ���� ���: %f\n", a - (int)a);
	}
	else if ((int)a % 2) {
		printf("�����̸� Ȧ���Դϴ�.\n");
	}
	else {
		printf("�����̸� ¦���Դϴ�.\n");
	}
	
}