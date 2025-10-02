#include <stdio.h>
#define MAX_PRODUCTS 100

int main(){

    int stockEntity[MAX_PRODUCTS];
    int sellEntity[MAX_PRODUCTS];

    int n, view_id;// 상품 종류 개수
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &stockEntity[i]);
    }

    for(int i = 0; i < n; i++){
        scanf("%d", &sellEntity[i]);
    }

    scanf("%d", &view_id);
    printf("%d\n", stockEntity[view_id - 1] - sellEntity[view_id - 1]);

    for(int i = 0; i < n; i++){
        printf("%d", stockEntity[i] - sellEntity[i]);
        if(i == n - 1) printf("\n");
    }

    return 0;
}
