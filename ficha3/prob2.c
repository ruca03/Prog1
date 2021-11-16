#include <stdio.h>


int main(){

    int x,y;

    printf("Indique o ponto (x,y):");
    scanf("%d %d",&x,&y);
    
    if (0 == x && 0 == y){
        printf("Ponto e a origem\n");
    }
    else if (x > 0){

        if (y > 0){
            printf("O ponto encontra-se no 1o quadrante\n");
        }
        else{
            printf("O ponto encontra-se no 4o quadrante\n");
        }
    }
    else {

        if (y > 0){
            printf("O ponto encontra-se no 2o quadrante\n");
        }
        else{
            printf("O ponto encontra-se no 3o quadrante\n");
        }
    }
    
    return 0;
}