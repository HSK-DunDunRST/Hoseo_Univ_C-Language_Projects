#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void main() {
	
	int r = 0;
	double ans1 = 0;
	double ans2 = 0;

	printf("������ ���� �Է��Ͽ� �ֽʽÿ�>> ");
	scanf("%d", &r);

	printf("���� �ѷ��� %.2f�Դϴ�.\n", 2 * M_PI * r);
	printf("���� ���̴� %.2f�Դϴ�.\n", pow(r, 2) * M_PI);


}