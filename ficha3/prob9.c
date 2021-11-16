#include <stdio.h>

int main(){

    int quant, i,atual;

    printf("Insira o numero de numeros primos que pretende: ");
    scanf("%d",&quant);


    printf("Os primeiros %d numeros primos sao:\n",quant);

    atual = 1;
    while (quant > 0)
    {
        atual = atual +1;
        i = 2;
        while(i < atual){
            if (atual%i == 0)
            {
                break;
            }
            i++;
        }
        if (i == atual){
            quant--;
            printf("%d\n",atual);
        }
    }
}