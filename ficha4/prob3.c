#include <stdio.h>


int main(){
    int op1,op2;


    printf("Insira um operando: ");
    scanf("%d",&op1);

    printf("Insira outro operando (potencia de base 2): ");
    scanf("%d",&op2);

    

    while (op2 != 1)
    {
        op1 = op1 << 1;

        op2 = op2 >> 1;
    }
    


    printf("O resultado da multiplicacao e: %d\n",op1);
    
    
    
}