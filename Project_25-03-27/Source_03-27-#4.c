#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	���ǹ� (���ǰ� �̻� ����) + else��
*/

void main() {
	int age = 0;
	printf("���̸� �Է��ϰ� ���͸� �����ʽÿ�.>> ");
	scanf("%d", &age);

	if (age >= 19) {
		printf("�����Դϴ�.\n");
	}
	else {
		printf("�̼������Դϴ�.\n");
	}
}