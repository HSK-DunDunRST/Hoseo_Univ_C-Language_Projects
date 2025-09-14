#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
	int k = 0;
	int d = 1;

	printf("세 자리 10진 정수 입력 후 Enter >>");
	scanf("%d", &k);

	printf("%d의 자리수 %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d의 자리수 %d\n", d, k % 10);
	k = k / 10;
	d = d * 10;

	printf("%d의 자리수 %d\n", d, k % 10);

}