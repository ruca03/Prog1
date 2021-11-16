#include <stdio.h>


int main(){

    int num,aux;

    printf("Insira numero: ");
    scanf("%d",&num);

    printf("Numeracao romana: ");

    aux = (int)(num/100);

    if (9 == aux){
        printf("CM");
    }
    else if (8 == aux){
        printf("DCCC");
    }
    else if (7 == aux){
        printf("DCC");
    }
    else if (6 == aux){
        printf("DC");
    }
    else if (5 == aux){
        printf("D");
    }
    else if (4 == aux){
        printf("CD");
    }
    else if (3 == aux){
        printf("CCC");
    }
    else if (2 == aux){
        printf("CC");
    }
    else if (1 == aux){
        printf("C");
    }
    else{
        /* Nothing*/
    }


    num = num%100;
    aux = (int)(num/10);

    if (9 == aux){
        printf("XC");
    }
    else if (8 == aux){
        printf("LXXX");
    }
    else if (7 == aux){
        printf("LXX");
    }
    else if (6 == aux){
        printf("LX");
    }
    else if (5 == aux){
        printf("L");
    }
    else if (4 == aux){
        printf("XL");
    }
    else if (3 == aux){
        printf("XXX");
    }
    else if (2 == aux){
        printf("XX");
    }
    else if (1 == aux){
        printf("X");
    }
    else{
        /* Nothing*/
    }


    num = num%10;
    aux = num;

    if (9 == aux){
        printf("IX");
    }
    else if (8 == aux){
        printf("VIII");
    }
    else if (7 == aux){
        printf("VII");
    }
    else if (6 == aux){
        printf("VI");
    }
    else if (5 == aux){
        printf("V");
    }
    else if (4 == aux){
        printf("IV");
    }
    else if (3 == aux){
        printf("III");
    }
    else if (2 == aux){
        printf("II");
    }
    else if (1 == aux){
        printf("I");
    }
    else{
        /* Nothing*/
    }

    printf("\n");
    return 0;
}