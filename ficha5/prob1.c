#include <stdio.h>


float peso_ideal(float altura,char sexo){
    if (('M' == sexo) || ('m' == sexo))
        return 72.7 * altura - 58;
    else if (('F' == sexo) || ('f' == sexo))
        return 62.1 * altura - 44.7;
    else 
        return 0;
}

int main(){

    float altura,peso;
    char sexo;

    printf("Insira a altura da pessoa: ");
    scanf("%f",&altura);
    printf("Insira o sexo da pessoa(M/F): ");
    scanf(" %c",&sexo);                             //adicionar um espaço antes de % faz com que elimine o "ENTER" inserido ao dar a altura
    

    printf("O peso ideal seria de %.2f quilos\n",peso_ideal(altura,sexo));
}