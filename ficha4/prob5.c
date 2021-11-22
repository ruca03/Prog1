#include <stdio.h>


int main(){
    int num, alg, sum = 0, i = 0;
    long long ean13;

    printf("Insira o numero: ");
    scanf("%lld",&ean13);

    

    while (ean13 != 0)
    {
        if (i%2 == 0){
            sum += (ean13%10)*3; 
        }
        else{
            sum += (ean13%10);
        }
        ean13 /=10;
        i++;  
    }

    alg=10 - sum%10;
    printf("%d\t\n",alg);
    
    
}