#include <stdio.h>

int main(){
    int input = 0;
    printf("삼각형의 크기 임력>> ");
    scanf("%d", &input);

    for(int i = 0; i < input; i++){
        for(int j = 0; j < (input - i - 1); j++){
            printf(" ");
        }
         // 별 출력
        for(int k = 0; k < i + 1; k++){
            printf("*");
        }

        for(int q = i; q > 0; q--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}