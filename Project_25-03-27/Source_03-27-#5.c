#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	���ǹ� ����(������) ����
*/

void main() {
	char grade = ' ';

	printf("������ �Է��ϰ� Enter�� �����ʽÿ�.>> ");
	scanf("%c", &grade);
	
	if (grade <= 'D') {
		printf("���� �հ�\n");
	}
}