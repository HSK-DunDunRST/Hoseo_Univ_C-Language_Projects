#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	if ~ else if ~ else ����
*/

void main() {

	int a = 0;
	int b = 0;
	int result = 0;

	printf("a�� b�� ���� �Է��Ͻʽÿ�. (���� ����)>> ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		result = a % b;
		printf("%d\n", result);
	} 
	else if (a < b) {
		result = b % a;
		printf("%d\n", result);

	}
	else {
		printf("���� ���� �Է��߽��ϴ�.\n");
	}

}