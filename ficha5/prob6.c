#include <stdio.h>
#include <math.h>   // nao esquecer de compilar com -lm

/* Usei varias funcoes, para exemplificar. nao era necessario usar tantas.*/

int get_bit(int num,int pos){
    
    if (pos == 0)
        return (num%(int)pow(10,pos+1));
    else
        return (num%(int)pow(10,pos+1))/pow(10,pos);

}

int calc_si(int a, int b, int cin){
    
    return ((a ^ b) ^ cin);  // usa-se o XOR pois 1 XOR 0 = 1   e   1 XOR 1 = 0

}

int calc_cin(int a, int b, int cin){
    
    return (((a ^ b) & cin)  | (a & b));

}

int soma_binario(int a, int b){

    int i = 0, resta, restb, ai, bi, si = 0, ci = 0, sum = 0;

    do{

        ai = get_bit(a,i);
        bi = get_bit(b,i);
        printf("a:%d \t b:%d\n",ai,bi);
        si = calc_si(ai,bi,ci);
        ci = calc_cin(ai,bi,ci);

        sum += si * pow(10,i);
        printf("si:%d\t ci:%d\n",si,ci);
        i++;
        resta = a/pow(10,i);
        restb = b/pow(10,i);
        printf("%d__%d:::\n",resta,restb);
    }
    while ((resta > 0) || (restb > 0) || (ci > 0));
    
    
    return sum;
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
