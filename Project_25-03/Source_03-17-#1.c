#include <stdio.h>
#include <math.h>

int main() {

	float a = 5.3;
	float b = 7.6;

	float ans1 = a / (a + b);
	float ans2 = (a - b) / (a + b);
	float ans3 = 2 * pow(a, 2) - (4 * a * b);

	printf("´ä1: %f\n", ans1);
	printf("´ä2: %f\n", ans2);
	printf("´ä3: %f\n", ans3);

	return 0;
}