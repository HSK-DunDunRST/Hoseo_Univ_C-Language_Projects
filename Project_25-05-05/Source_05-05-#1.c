#include <stdio.h>

int main(){
    int koreaScore[] = {15, 17, 27, 32};
    int chinaScore[] = {27, 16, 19, 11};

    printf("한국팀 점수: ");
    for(int i = 0; i < sizeof(koreaScore) / sizeof(int); i++){
        printf("%d ", koreaScore[i]);
    }
    printf("\n");

    printf("중국팀 점수: ");
    for(int i = 0; i < sizeof(chinaScore)/ sizeof(int); i++){
        printf("%d ", chinaScore[i]);
    }
    printf("\n");
    
    return 0;
}