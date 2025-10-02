#include <stdio.h>

int main() {
	int n; // 상품 종류 개수
    int totalStockEntity = 0, totalEnter = 0, totalSales = 0; // 총 재고 수량, 총 입고 수량, 총 판매 수량
    float salesRate; // 판매율

	int enterEntity[100];
	int salesEntity[100];
	int stockEntity[100];
	
    scanf("%d", &n);
    
    // 입고 수량 입력
	for (int i = 0; i < n; i++) {
		scanf("%d", &enterEntity[i]);
        totalEnter += enterEntity[i];
	}
    // 판매 수량 입력
	for (int i = 0; i < n; i++) {
		scanf("%d", &salesEntity[i]);
        totalSales += salesEntity[i];
	}
    // 재고 수량 계산
	for (int i = 0; i < n; i++) {
		stockEntity[i] = enterEntity[i] - salesEntity[i];
	}
    // 재고 수량 출력
    printf("재고수량: ");
    for (int i = 0; i < n; i++) {
		printf("%d", stockEntity[i]);
        totalStockEntity += stockEntity[i];
		if (i != n-1) printf(" ");
	}
    printf("\n");
    // 총 판매량 (판매율) 계산 및 출력
	printf("총판매량: %d(%.2f%%)\n", totalSales, (float)totalSales / totalEnter * 100);
    // 가장 많이 판매된 상품 출력
    int maxSalesIndex = 0;
    for (int i = 1; i < n; i++) {
        if (salesEntity[i] > salesEntity[maxSalesIndex]) {
            maxSalesIndex = i;
        }
    }
    printf("가장 많이 판매된 상품: ID %d, 판매량 %d\n", maxSalesIndex + 1, salesEntity[maxSalesIndex]);
    // 가장 적게 판매된 상품 출력
    int minSalesIndex = 0;
    for (int i = 1; i < n; i++) {
        if (salesEntity[i] < salesEntity[minSalesIndex]) {
            minSalesIndex = i;
        }
    }
    printf("가장 적게 판매된 상품: ID %d, 판매량 %d\n", minSalesIndex + 1, salesEntity[minSalesIndex]);
    // 재고부족한 상품 ID와 재고 수량 출력 (재고 수량이 2 이하일 경우)
    for (int i = 0; i < n; i++) {
        if (stockEntity[i] <= 2) {
            printf("상품 ID %d : 재고부족(%d)\n", i + 1, stockEntity[i]);
        }
    }

	return 0;
}