#include <stdio.h>
#include <stdlib.h>


/* a funcao rand() gera numeros "semi-aleatorios" isto porque gera uma sequencia de numeros baseados numa seed*/
/*Se correrem o codigo várias vezes vai dar o mesmo resultado porque a seed não mudou*/

int main(){

    int lancamentos,res = 0, face6 = 0;

    printf("Quantos lancamentos? ");
    scanf("%d",&lancamentos);

    while (lancamentos > 0)
    {
        res = (rand() % 6) + 1;
        if (res == 6){
            face6++;
        }
        lancamentos--;
    }
    printf("A face seis saiu %d vezes\n",face6);
    

}