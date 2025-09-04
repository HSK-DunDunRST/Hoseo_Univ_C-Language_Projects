#include <stdio.h>
#include <stdlib.h>

int main(){

    int select = 0, count = 0;
    int temp_math, temp_eng, temp_kor = 0;
    double avr[50];
    int math[50], eng[50], kor[50];

    while(1){

        printf("1번: 입력\n");
        printf("2번: 출력\n");
        printf("3번: 종료\n");
        scanf("%d", &select);
        
        if(select == 1){
            printf("수학: ");
            scanf("%d", &temp_math);
            printf("영어: ");
            scanf("%d", &temp_eng);
            printf("국어: ");
            scanf("%d", &temp_kor);
            int i = 0;
            double temp_avr = (temp_math + temp_eng + temp_kor) / 3.0;
            for(i = 0; i < count; i++){
                if(avr[i] < temp_avr){
                    for(int j = count; j >= i; j--){
                        avr[j+1] = avr[j];
                        math[j+1] = math[j];
                        eng[j+1] = eng[j];
                        kor[j+1] = kor[j];
                    }
                    break;
                }
            }
            avr[i] = temp_avr;
            math[i] = temp_math;
            eng[i] = temp_eng;
            kor[i] = temp_kor;
        } else if(select == 2){
            printf("\t수학\t영어\t국어\t평균\n");
            for(int i = 0; i < count; i++){
                printf("%d\t%d\t%d\t%d\t\t%lf\n", i+1, math[i], eng[i], kor[i], avr[i]);
            }
        }

    }
    return 0;
}