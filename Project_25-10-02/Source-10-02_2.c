#include <stdio.h>
#define MAX_PRODUCTS 100

int main(){

    int stockEntity[MAX_PRODUCTS];
    int sellEntity[MAX_PRODUCTS];

    int n = 0; // 상품 종류 개수
    int total_stock = 0, total_sell = 0; // 총 재고 수량, 총 판매 수량
    double avg_sell = 0.0; // 평균 판매 수량

    // 상품 종류 개수 입력
    scanf("%d", &n);

    // 상품별 재고수량 입력 및 총 재고 수량 계산
    for(int i = 0; i < n; i++){
        scanf("%d", &stockEntity[i]);
        total_stock += stockEntity[i];
    }

    // 상품별 판매수량 입력 및 총 판매 수량 계산
    for(int i = 0; i < n; i++){
        scanf("%d", &sellEntity[i]);
        total_sell += sellEntity[i];
    }

    // 재고 수량 출력
    for(int i = 0; i < n; i++){
        if(i == 0) printf("재고수량: ");
        printf("%d ", stockEntity[i] - sellEntity[i]);
        if(i == n -1) printf("\n");
    }

    // 총 판매량 및 판매율 출력
    avg_sell = ((double)total_sell / total_stock * 100);
    printf("총 판매량: %d (판매율 %.2f%%)\n", total_sell, avg_sell);

    return 0;
}
