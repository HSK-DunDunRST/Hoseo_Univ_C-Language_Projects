#include <stdio.h>

int main() {
    int arr[25] = {0};  // 1~100 사이의 4의 배수는 총 25개
    int index = 0;
    int sum = 0;

    // 1부터 100까지 반복 + 4의 배수 출력
    printf("4의 배수: ");
    for (int i = 1; i <= 100; i++) {
        if (i % 4 == 0) {
            arr[index] = i;
            printf("%d ", arr[index]);
            sum += i;
            index++;
        }
    }
    printf("\n");

    // 결과 출력
    printf("4의 배수 합계: %d\n", sum);

    return 0;
}