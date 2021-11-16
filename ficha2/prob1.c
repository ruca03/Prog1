#include <stdio.h>


int main(){

    float pi = 3.1416;
    float raio,perimetro,area;

    printf("Raio?");
    scanf("%f",&raio);

    perimetro = 2 * pi * raio;
    area = pi * raio * raio;

    printf("Perimetro = %.4f\n",perimetro);
    printf("Area = %.4f\n", area);
    
    return 0;
}