#include <stdio.h>


int main(){

    
    float num;
    int inteiro_prox, par_menor, par_maior;

    printf("Insira um numero: ");
    scanf("%f",&num);           

    //arredonda o num para o inteiro mais proximo. como a variavel é inteira so guarda a parte inteira da conta
    inteiro_prox = (num*2+1)/2;                             
    
    par_menor = inteiro_prox - 2 + (inteiro_prox % 2);      //subtrai dois e soma 1 caso seja impar o nr para dar o par mais baixo
    par_maior = inteiro_prox + 2 - (inteiro_prox % 2);      //soma dois e subtrai 1 caso seja impar o nr para dar o par mais alto 


    printf("%d %d\n",par_menor,par_maior);
    
    return 0;
}