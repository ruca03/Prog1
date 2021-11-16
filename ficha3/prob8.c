#include <stdio.h>

int main(){

    float popA, taxaA, popB, taxaB;
    int anos;

    printf("Pais A (pop/taxa): ");
    scanf("%f %f",&popA,&taxaA);
    printf("Pais B (pop/taxa): ");
    scanf("%f %f",&popB,&taxaB);

    anos=0;
    while (1)
    {
        if (popB > popA || anos > 65500)
        {
            break;
        }

        popA += popA * (taxaA/100);
        popB += popB * (taxaB/100);
        anos++;
    }
    
    if (anos > 65500){
        printf("Populacao de B nunca ultrapassara a de A.\n");
    }
    else{
        printf("Populacao de B ultrapassara a de A em %d anos.\n",anos);
    }
    

    return 0;
}