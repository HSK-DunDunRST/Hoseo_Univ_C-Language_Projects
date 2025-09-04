/* 1번 문제: 배열의 최대값, 최소값 구하기
랜덤(1 <= x <= 100)으로 10개의 정수 값이 저장되어 있는 배열을 출력하고, 배열의 최대값, 최소값을 구하여 출력하시오.
출력)
1 2 3 4 5 6 7 8 9 10
최대값: 10
최소값: 1 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int arr[10] = {0};
    int max = 0, min = 0, index = 0;
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;
    }

    max = arr[0];
    min = arr[0];
    while(1){
        if(index == 10)
            break;
        else if(max < arr[index])
            max = arr[index];
        else if(min > arr[index])
            min = arr[index];
        printf("%d ", arr[index]);
        index++;
    }

    printf("\n최대값: %d, 최소값: %d\n", max, min);

    return 0;
}