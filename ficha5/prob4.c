#include <stdio.h>
#include <math.h>   // nao esquecer de compilar com -lm



float distancia(float x1, float y1, float x2, float y2){
    
    return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));

}


int main(){

    float x1, y1;
    float x2, y2;

    printf("Quais as coordenadas do ponto 1? ");
    scanf("%f %f",&x1,&y1);
    printf("Quais as coordenadas do ponto 2? ");
    scanf("%f %f",&x2,&y2);

    printf("A distancia entre os dois pontos e %.2f\n",distancia(x1,y1,x2,y2));
    

}