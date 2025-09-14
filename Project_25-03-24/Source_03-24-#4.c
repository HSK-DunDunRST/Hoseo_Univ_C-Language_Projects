#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void main() {
	
	int r = 0;
	double ans1 = 0;
	double ans2 = 0;

	printf("반지름 값을 입력하여 주십시오>> ");
	scanf("%d", &r);

	printf("원의 둘레는 %.2f입니다.\n", 2 * M_PI * r);
	printf("원의 넓이는 %.2f입니다.\n", pow(r, 2) * M_PI);


}