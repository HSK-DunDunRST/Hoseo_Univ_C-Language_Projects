#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	switch ~ case문 예제
*/

void main() {
	int a = 0;

	printf("입력>> ");
	scanf("%d", &a);

	switch (a) {
		case 1:
			printf("원");
		case 2:
			printf("투");
		case 3:
			printf("쓰리");
	}
}