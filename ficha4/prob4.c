#include <stdio.h>


int main(){
    int num, alg, inv = 0, i = 0;


    printf("Insira o numero: ");
    scanf("%d",&num);

    
    alg = num;
    while (alg != 0)
    {
        inv = inv * 10 +  alg%10;
        alg /=10;

    }
    
    printf("O inverso do numero %d e %d\n",num,inv);
    
    
}