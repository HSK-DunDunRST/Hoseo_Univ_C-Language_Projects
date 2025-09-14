#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_num[100] = {0};
    int num, duplicate;

    srand(time(NULL));
    for(int i = 0; i < 100;) {
        num = rand() % 100 + 1;
        duplicate = 0;
        for(int j = 0; j < i; j++) {
            if(random_num[j] == num) {
                duplicate = 1;
                break;
            }
        }
        if(!duplicate) {
            random_num[i] = num;
            i++;
        }
    }

    for(int i = 0; i < 100; i++)
        printf("%d ", random_num[i]);

    return 0;
}