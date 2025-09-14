#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	for (int i = 0; i < 6; i++){
		printf("%d) 이름: 이지연\n", i + 1);
	}	

	for (int i = 0; i < 6; i += 2) {
		printf("%d) 이름: 이지연\n", i + 1);
	}

}