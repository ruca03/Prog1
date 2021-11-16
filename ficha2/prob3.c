#include <stdio.h>


int main(){

    int inteiro1, inteiro2, resto;

    printf("Numero inteiro 1?");
    scanf("%d",&inteiro1);
    
    printf("Numero inteiro 2?");
    scanf("%d",&inteiro2);

    resto = inteiro1 % inteiro2;

    if (0 == resto){
        printf("%d e multiplo de %d\n",inteiro1,inteiro2);
    }
    else{
        printf("%d nao e multiplo de %d\n",inteiro1,inteiro2);
    }
    
    return 0;
}