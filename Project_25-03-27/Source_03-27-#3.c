#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 
	if(���ǹ�) ����
*/

void main() {
	int grade = 0;
	printf("���� ������ �Է��ϰ� ���͸� �����ʽÿ�.>> ");
	scanf("%d", &grade);

	if (grade > 70) {
		printf("���迡 �հݵǾ����ϴ�.\n");
	}
	else {
		printf("���迡 ���հ� �Ǿ����ϴ�.\n");
	}
}