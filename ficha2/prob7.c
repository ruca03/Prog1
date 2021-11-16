#include <stdio.h>


int main(){

    
    float r1,r2,rp,rs;

    printf("Valor de R1 (em ohm)?");
    scanf("%f",&r1);                         

    printf("Valor de R2 (em ohm)?");
    scanf("%f",&r2);                         

    rp = (r1 * r2) / (r1 + r2);
    rs = (r1 + r2);


    printf("Valor da resistencia equivalente em serie: %.4f ohm\n",rs);
    printf("Valor da resistencia equivalente em paralelo: %.4f ohm\n",rp);

    


    
    return 0;
}