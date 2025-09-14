#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int arr[10] = {0};
    int max = 0;
    int min = 0;

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100 + 1;
    }
    

    max = arr[0];
    min = arr[0];
    for(int i = 1; i < 10; i++){
        if(arr[i] > max) max = arr[i];
        else if(arr[i] < min) min = arr[i];
    }

    for(int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("%d %d\n", min, max);

    return 0;
}