#include <stdio.h>

int main() {
    int n = 5; // 초기 별의 크기

    for (int i = n; i >= 1; i--) { // 점점 작아지는 크기로 반복
        for (int j = 1; j <= i; j++) { // 별 출력
            printf("*");
        }
        printf("\n"); // 줄바꿈
    }

    return 0;
}