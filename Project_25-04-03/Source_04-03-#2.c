#include <stdio.h>

int main() {

    for (int i = 5; i > 0; i--) { // 점점 작아지는 크기로 반복
        for (int j = i; j > 0; j--) { // 숫자 출력
            printf("%d", j);
        }
        printf("\n"); // 줄바꿈
    }

    return 0;
}