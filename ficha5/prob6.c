#include <stdio.h>
#include <math.h>   // nao esquecer de compilar com -lm

/* Usei varias funcoes, para exemplificar. nao era necessario usar tantas.*/

int get_bit(int num,int pos){
    
    if (pos == 1)
        return (num%(int)pow(10,pos));
    else
        return (num%(int)pow(10,pos))/pow(10,pos-1);

}

int calc_si(int a, int b, int cin){
    
    return (a ^ b ^ cin);  // usa-se o XOR pois 1 XOR 0 = 1   e   1 XOR 1 = 0

}

int calc_cin(int a, int b, int cin){
    
    return (((a | b) & cin)  | (a & b));

}

int soma_binario(int a, int b){

    int i = 0, resta, restb, ai, bi, si, ci, sum = 0;

    do{

        


        i++;
        resta = a/pow(10,i);
        restb = b/pow(10,i);
    }
    while ((resta > 0) || (restb > 0));
    
    
    return 0;
}


int main(){

    int num1,num2,sum;

    printf("Insira o primeiro operando: ");
    scanf("%d",&num1);
    printf("Insira o segundo operando: ");
    scanf("%d",&num2);

    sum = soma_binario(num1,num2);

    printf("A soma dos dois numeros binarios e: %d\n",sum);
    
    

}