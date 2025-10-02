#include <stdio.h>

#define MAX_PRODUCTS 100
// 함수 선언
void selectMenu(int enterEntity[], int salesEntity[], int stockEntity[], int totalEnter, int totalSales);
void inputMenu(int enterEntity[], int *totalEnter);
void inputEnterEntity(int enterEntity[], int n, int *totalEnter);
void inputSalesEntity(int salesEntity[], int n, int *totalSales);
void inputIndividualEnterEntity(int enterEntity[], int *totalEnter);
void calculateStock(int enterEntity[], int salesEntity[], int stockEntity[], int n);
void printStock(int stockEntity[], int n);
void printSalesStats(int salesEntity[], int n, int totalEnter, int totalSales);
void printLowStock(int stockEntity[], int n);

int main() {
    int n; // 상품 종류 개수
    int totalEnter = 0, totalSales = 0;

    int enterEntity[MAX_PRODUCTS];
    int salesEntity[MAX_PRODUCTS];
    int stockEntity[MAX_PRODUCTS];

    selectMenu(enterEntity, salesEntity, stockEntity, totalEnter, totalSales);

    // inputEnterEntity(enterEntity, MAX_PRODUCTS, &totalEnter);
    // inputSalesEntity(salesEntity, MAX_PRODUCTS, &totalSales);
    

    return 0;
}

// 원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 상품현황, 4. 종료)
void selectMenu(int enterEntity[], int salesEntity[], int stockEntity[], int totalEnter, int totalSales) {
    int menuSelected;
    int exitFlag = 0; // 종료 플래그 추가
    
    while (!exitFlag) {
        printf("[쇼핑몰 관리 프로그램]\n");
        printf("원하는 메뉴를 선택하세요.(1. 입고, 2. 판매, 3. 상품현황, 4. 종료)\n");

        scanf("%d", &menuSelected);

        switch(menuSelected) {
            case 1:
                printf("입고 메뉴를 선택하셨습니다.\n");
                inputMenu(enterEntity, &totalEnter);
                break;
            case 2:
                printf("판매 메뉴를 선택하셨습니다.\n");
                break;
            case 3:
                // printf("상품현황 메뉴를 선택하셨습니다.\n");
                calculateStock(enterEntity, salesEntity, stockEntity, 5);
                printStock(stockEntity, 5);
                printSalesStats(salesEntity, 5, totalEnter, totalSales);
                printLowStock(stockEntity, 5);
                break;
            case 4:
                printf("프로그램을 종료합니다.\n");
                exitFlag = 1; // 종료 플래그 설정
                break;
            default:
                printf("잘못된 메뉴 선택입니다. 다시 선택해주세요.\n");
                break;
        }
    }
}

void inputMenu(int enterEntity[], int *totalEnter) {
    printf("입고수량 입력 : 전체 상품 입고수량 입력 1, 개별 상품 입력 2를 선택\n");
    int choice;

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        inputEnterEntity(enterEntity, 5, totalEnter); // 전체 상품 입고 수량 입력
        break;
    case 2:
        inputIndividualEnterEntity(enterEntity, totalEnter); // 개별 상품 입고 수량 입력
        break;
    default:
        printf("잘못된 선택입니다.\n");
        break;
    }
}

// 입고 수량 입력
void inputEnterEntity(int enterEntity[], int n, int *totalEnter) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &enterEntity[i]);
        *totalEnter += enterEntity[i];
    }
}

// 판매 수량 입력
void inputSalesEntity(int salesEntity[], int n, int *totalSales) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &salesEntity[i]);
        *totalSales += salesEntity[i];
    }
}

// 재고 수량 계산
void calculateStock(int enterEntity[], int salesEntity[], int stockEntity[], int n) {
    for (int i = 0; i < n; i++) {
        stockEntity[i] = enterEntity[i] - salesEntity[i];
    }
}

// 재고 수량 출력
void printStock(int stockEntity[], int n) {
    int totalStock = 0;
    printf("재고수량: ");
    for (int i = 0; i < n; i++) {
        printf("%d", stockEntity[i]);
        totalStock += stockEntity[i];
        if (i != n - 1) printf(" ");
    }
    printf("\n");
}

// 총 판매량, 판매율, 최대/최소 판매 상품 출력
void printSalesStats(int salesEntity[], int n, int totalEnter, int totalSales) {
    printf("총판매량: %d(%.2f%%)\n", totalSales, (float)totalSales / totalEnter * 100);

    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (salesEntity[i] > salesEntity[maxIndex]) maxIndex = i;
        if (salesEntity[i] < salesEntity[minIndex]) minIndex = i;
    }
    printf("가장 많이 판매된 상품: ID %d, 판매량 %d\n", maxIndex + 1, salesEntity[maxIndex]);
    printf("가장 적게 판매된 상품: ID %d, 판매량 %d\n", minIndex + 1, salesEntity[minIndex]);
}

// 재고 부족 상품 출력
void printLowStock(int stockEntity[], int n) {
    for (int i = 0; i < n; i++) {
        if (stockEntity[i] <= 2) {
            printf("상품 ID %d : 재고부족(%d)\n", i + 1, stockEntity[i]);
        }
    }
}

// 개별 상품 입고 수량 입력
void inputIndividualEnterEntity(int enterEntity[], int *totalEnter) {
    int productId, quantity;
    scanf("%d", &productId);
    
    printf("입고수량: ");
    scanf("%d", &quantity);
    
    enterEntity[productId - 1] += quantity;
    *totalEnter += quantity;
    
    printf("상품 ID %d에 %d개 입고되었습니다.\n", productId, quantity);
}

// (출력)입고수량 입력 : 전체 상품 입고수량 입력 1, 개별 상품 입력 2를 선택
void inputEntityMenu(int enterEntity[], int *totalEnter) {
    printf("입고수량 입력 : 전체 상품 입고수량 입력 1, 개별 상품 입력 2를 선택\n");
    int choice;

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        inputEnterEntity(enterEntity, 5, totalEnter); // 전체 상품 입고 수량 입력
        break;
    case 2:
        inputIndividualEnterEntity(enterEntity, totalEnter); // 개별 상품 입고 수량 입력
        break;
    default:
        printf("잘못된 선택입니다.\n");
        break;
    }
}