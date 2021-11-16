#include <stdio.h>


int main(){

    int num,div;

    printf("Insira um numero? ");
    scanf("%d",&num);
    
    while (num > 1){

        div=2;
        while (div < num){
            if (0 == (num%div)){
                num = num/div;
                printf("%d ",div);
                break;
            }
            div++;
        }
        if (div == num){
            printf("%d ",div);
            break;
        }
        
    }
    printf("\n");

    return 0;
}