#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
	/*for (int a = 1; a < 10; a++) {
		for (int b = 1; b < 10; b++){
			int result = a * b;
			printf("%d*%d= %2d ", a, b, result);
		}
		printf("\n");
	}*/

	/*for (int a = 1; a < 10; a++) {
		for (int b = 2; b < 10; b++) {
			int result = a * b;
			printf("%d*%d= %2d ", b, a, result);
		}
		printf("\n");
	}*/

	//int n = 0;
	//int sum = 0;

	//printf("1부터 n까지의 덧셈계산\n");
	//printf("정수 n 입력: ");
	//scanf("%d", &n);
	//
	//for (int i = 1; i <= n; i++) { // for(int i = 1; i <= n; sum+=i++)
	//	sum += i;
	//	printf("1부터 %d까지의 합= %2d\n", i, sum);
	//}

	/*int n = 0;
	int fact = 1;

	printf("정수 n 입력: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
		printf("1부터 %d까지의 !n = %d\n", i, fact);
	}*/

	/*int input = 0;
	int result = 0;
	printf("정수 입력: ");
	scanf("%d", &input);

	for (int i = input; i >= 1; i /= 10) {
		result = i % 10;
		printf("%d %% 10 = %d\n", i, result);
	}*/

	int input = 0;

	printf("정수 n 입력> ");
	scanf("%d", &input);
	
	for (int j = 1; j <= input; j++) {
		for (int i = 1; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}
}