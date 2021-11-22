#include <stdio.h>
#include <math.h>   // nao esquecer de compilar com -lm



float distancia(float x1, float y1, float x2, float y2){
    
    return sqrt(pow(x1 - x2,2) + pow(y1 - y2,2));

}


int main(){

    float x1, y1, r1;
    float x2, y2, r2;
    float dist;
    printf("Posicao (x, y) e raio da bola 1? ");
    scanf("%f %f %f", &x1, &y1, &r1);
    printf("Posicao (x, y) e raio da bola 2? ");
    scanf("%f %f %f", &x2, &y2, &r2);

    dist=distancia(x1,y1,x2,y2);
    if (dist > (r1 + r2)){
        printf("As duas bolas nao estao em colisao.\n");
    }
    else{
        printf("As duas bolas estao em colisao.\n");
    }
    

}