#include <stdio.h>


int main(){

    
    int b0,b1,b2,b3;
    int decimal;

    printf("Qual o valor em binario?");
    scanf("%d%d%d%d",&b3,&b2,&b1,&b0);                          //le os 4 valores dos bits.podem ser separados por espacos ou <enter>

    decimal= b3 * (2*2*2) + b2 * (2*2) + b1 *(2) + b0 * (1);    //converte os bits para a base decimal


    printf("O valor na base decimal: %d\n",decimal);            //usa-se %d para imprimir na base decimal
    printf("O valor na base octal: %o\n",decimal);              //usa-se %o para imprimir na base octal
    printf("O valor na base hexadecimal: %x\n",decimal);        //usa-se %x para imprimir na base hexadecimal
    


    
    return 0;
}