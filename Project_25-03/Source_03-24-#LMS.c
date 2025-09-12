#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	
	double a = 0;
	double b = 0;
	double c = 0;

	printf("실수 3개를 입력하여 주십시오. (예)3.14 2.1 6.4\n");
	printf("입력>> ");
	scanf("%lf %lf %lf", &a, &b, &c);

	/*printf("%f %f %f", a, b, c);*/

	double fx1 = (3 * a) + (4 * b) - (6 * c);
	double fx2 = (2 * pow(a, 2)) + (4 * b * c);
	double fx3 = (a + b) / c;

	printf("%f %f %f의 결과 계산입니다.\n", fx1, fx2, fx3);

}