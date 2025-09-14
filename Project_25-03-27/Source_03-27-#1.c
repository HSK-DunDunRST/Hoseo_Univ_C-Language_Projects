#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	double x = M_PI;
	int i = 10;

	i = (int)(i + x);
	printf("i = %d\n", i);
	printf("int x = %d\n", (int)x);
	printf("double x = %f\n", x);
}