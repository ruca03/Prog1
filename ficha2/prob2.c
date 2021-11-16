#include <stdio.h>


int main(){

    float celsius, kelvin, fahr;

    printf("Qual a temperatura?");
    scanf("%f",&celsius);

    kelvin = celsius + 273.15;
    fahr = celsius *9/5 + 32;

    printf("%.2f C = %.2f K\n",celsius, kelvin);
    printf("%.2f C = %.2f F\n",celsius, fahr);
    
    return 0;
}