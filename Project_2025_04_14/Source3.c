#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        printf("%f\n", rand() / 32767.);
    }

    return 0;
}