#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(){

    int number[SIZE];
    int total = 0;
    int min, max;
    float avg = 0.0;
    // 난수 생성 초기화
    srand(time(NULL));

    for(int i = 0; i < SIZE; i++) number[i] = (rand() % 100) + 1; // 1~100 난수 생성
    // 10개식 출력
    for(int i = 0; i < SIZE; i++) {
        printf("%3d\t", number[i]);
        if((i+1) % 10 == 0) printf("\n");
    }
    // 총합, 최대값, 최소값 계산
    for(int i = 0; i < SIZE; i++){
        total += number[i];
    }
    avg = (float)total / SIZE;

    max = number[0];
    min = number[0];

    for(int i = 1; i < SIZE; i++){
        if(number[i] > max) max = number[i];
        if(number[i] < min) min = number[i];
    }

    printf("\n총합: %d\n", total);
    printf("평균: %.2f\n", avg);

    return 0;
}