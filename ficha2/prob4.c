#include <stdio.h>


int main(){

    float num,decimal;
    int inteiro;

    printf("Insira um numero:");
    scanf("%f",&num);

    inteiro = (int)num;
    decimal = num - inteiro;


    printf("Numero com 3 casas decimais = %.3f\n",num);
    printf("Parte inteira = %d\n",inteiro);
    printf("Parte decimal = %f\n",decimal);

    
    return 0;
}