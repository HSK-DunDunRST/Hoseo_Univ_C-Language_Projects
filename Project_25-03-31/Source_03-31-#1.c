#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	for (int i = 0; i < 6; i++){
		printf("%d) �̸�: ������\n", i + 1);
	}	

	for (int i = 0; i < 6; i += 2) {
		printf("%d) �̸�: ������\n", i + 1);
	}

}