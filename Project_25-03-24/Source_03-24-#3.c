#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;

	printf("[���� a�� �Է��Ͻʽÿ�.] >> ");

	scanf("%d", &a);
	
	printf("%d\n", a++);
	printf("%d\n", ++a);
	printf("%d\n", a--);
	printf("%d\n", --a);
}			  