#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// int main(){

//     int arr[10] = {0};
//     int count = 0;

//     srand(time(NULL));

//     while (count < 10) {
//         int num = rand() % 100 + 1; // 1~100 사이의 난수
//         int duplicate = 0;
//         for (int i = 0; i < count; i++) {
//             if (arr[i] == num) {
//                 duplicate = 1;
//                 break;
//             }
//         }
//         if (!duplicate) {
//             arr[count++] = num;
//         }
//     }

//     // 결과 출력 (확인용)
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     for(int i = 0; i < 10; i++)
//         if(arr[i] % 2 == 0) printf("%d ", arr[i]);
//     printf("\n");
//     for(int i = 0; i < 10; i++)
//         if(arr[i] % 2 == 1) printf("%d ", arr[i]);
//     printf("\n");


//     return 0;
// }

int main(){

    int odd[10] = {0}, even[10] = {0};
    int odd_index = 0, even_index = 0;

    for(int i = 0; i < 10; i++){
        int rand_number = rand() % 100 + 1;
        if(rand_number % 2 == 0) even[even_index++] = rand_number;
        else if(rand_number % 2 == 1) odd[odd_index++] = rand_number;
    }

    for(int i = 0; i < even_index; i++)
        printf("%d ", even[i]);
    printf("\n");
    for(int i = 0; i < odd_index; i++)
        printf("%d ", odd[i]);
    printf("\n");

    return 0;
}