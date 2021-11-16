#include <stdio.h>
#include <math.h>  //nao esquecer de compilar com -lm

int main(){

    int inicial, juro, anos;
    float final;

    printf("Qual o capital inicial? ");
    scanf("%d",&inicial);
    printf("Qual a taxa de juro dada pelo banco? ");
    scanf("%d",&juro);
    printf("Durante quantos anos? ");
    scanf("%d",&anos);
    

    final = inicial * pow((1 + juro*1.0/100), anos);        //multiplicar o numero por 1.0 "transforma" o inteiro em float na conta
    
    printf("O capital acumulado ao fim de %d anos e de %.3f euros\n",anos,final);

    return 0;
}