#include <stdio.h>


int main(){

    int num,sum = 0;

    printf("Insira um numero? ");
    scanf("%d",&num);
    
    while (num > 0){
        sum = sum + num%10;
        num = (int)(num/10); 
    }
    
    printf("A soma dos digitos e %d\n",sum);

    return 0;
}