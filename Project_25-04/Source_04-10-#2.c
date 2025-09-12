#include <stdio.h>

int main() {
    int money;
    int unit = 10000; // 가장 큰 화폐
    int count; // 각 단위별 개수

    printf("거스름돈을 입력하세요: ");
    scanf("%d", &money);

    for (int i = 0; i < 5; i++) {
        count = money / unit; // 해당 단위로 나눔
        printf("%6d > %d\n", unit, count); // 결과 출력
        money %= unit; // 나머지 계산
        unit/=10;
    }

    return 0;
}