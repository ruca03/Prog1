#include <stdio.h>


int main(){

    
    int num1, num2;

    printf("Insira numero para variavel 1:");
    scanf("%d",&num1);                         

    printf("Insira numero para variavel 2:");
    scanf("%d",&num2);                         

    //Usando XOR (so funciona para inteiros)
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;

    //Usando somas e subtracoes (cuidado com o overflow das variaveis!!!)
    //num1 = num1 + num2;
    //num2 = num1 - num2;
    //num1 = num1 - num2;
    
    //Usando multiplicaçoes e divisoes (cuidado com o overflow das variaveis ainda mais facil que o anterior e demora mais tempo que os outros!!!)
    //num1 = num1 * num2;
    //num2 = num1 / num2;
    //num1 = num1 / num2;
    


    printf("Valor da variavel 1 depois da troca: %d\n",num1);
    printf("Valor da variavel 2 depois da troca: %d\n",num2);

    


    
    return 0;
}