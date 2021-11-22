#include <stdio.h>


int main(){
    char car;
    int linhas,colunas,i,j;


    printf("Introduza um carater: ");
    scanf("%c",&car);

    printf("Introduza o numero de linhas: ");
    scanf("%d",&linhas);

    printf("Introduza o numero de colunas: ");
    scanf("%d",&colunas);

    for (i = 0; i < colunas; i++)
    {
        printf("%c",car);
    }
    
    
    for (j = 0; j < linhas-2; j++)
    {
        printf("\n%c",car);
        for (i = 0; i < colunas-2; i++)
        {
            printf("_");
        }
        printf("%c",car);
    }
    
    printf("\n");
    for (i = 0; i < colunas; i++)
    {
        printf("%c",car);
    }
    printf("\n");
    
    
    
}