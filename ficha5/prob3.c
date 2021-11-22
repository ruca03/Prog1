#include <stdio.h>

float f_x(int a, float x){
    
    return a * x * x;

}


int main(){

    int a,int_low, int_high;
    float inc,x,y;
    printf("Qual o valor de a? ");
    scanf("%d",&a);
    printf("Qual o intervalo? ");
    scanf("%d %d",&int_low, &int_high);
    printf("Qual o incremento? ");
    scanf("%f",&inc);

    x = int_low;
    while (x <= int_high)
    {
        y = f_x(a,x);

        printf("f(%.1f)=%.1f\n",x,y);
        
        x += inc;
    }
    

}