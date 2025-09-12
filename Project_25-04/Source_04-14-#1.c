#include <stdio.h>
#include <stdlib.h>

int main(){

    int input = 1;
    
    while(input != 0){
        printf("숫자 입력 후 Enter>> ");
        scanf("%d", &input);
        printf("%d의 절댓값은 %d\n", input, abs(input));
    }

    return 0;
}