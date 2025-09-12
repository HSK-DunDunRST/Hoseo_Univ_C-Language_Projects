#include <stdio.h>
#include <math.h>

// ch12 - 정수형 변환 함수
int main(){
    double x = 123.45;
    double y = -987.654;

    printf("cell(%f) = %f\n", x, ceil(x));
    printf("floor%f) = %f\n", x, floor(x));
    
    printf("cell(%f) = %f\n", y, ceil(y));
    printf("floor%f) = %f\n", y, floor(y));

    return 0;
}