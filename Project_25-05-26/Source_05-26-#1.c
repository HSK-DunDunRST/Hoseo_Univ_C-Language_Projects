#include <stdio.h>

int main(){

    while(1){
        char str[256] = {0};
        gets(str);

        int len = 0;
        while(str[len] != 0){
            len++;
        };

        if(len == 0) break;

        printf("%s\n", str);
        printf("%d\n", len);
    }


    return 0;
}