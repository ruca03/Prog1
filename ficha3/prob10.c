#include <stdio.h>

int main(){

    int h, linha, i, j;

    printf("Altura: ");
    scanf("%d",&h);

    i = 0;
    j = 0;
    linha = 1; 
    while (linha < h)
    {
        for(i=0;i<(h - linha -1);i++){
            printf(" ");
        }

        for(i=0;i<(2 * linha - 1);i++){
            printf("*");
        }
        printf("\n");
        linha ++;
    }

    for(i=0;i<(h - 1 -1);i++){
            printf(" ");
    }

    printf("*\n");


}