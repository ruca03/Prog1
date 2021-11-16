#include <stdio.h>

int main(){

    float num,min,max,avg;
    int i;

    printf("Insira a sequencia:\n");

    i=1;
    while(1){
        if(scanf("%f", &num) != 1){
            break;
        }

        if (1 == i){
            avg = num;
            min = num;
            max = num; 
        }
        else{
            avg = avg * (i-1)/(i) + num/i;

            if ( num < min){
                min = num;
            }
            else if (num > max){
                max = num;
            }
            else{
                /* Nothing */
            }
        }
        
        i++;
    }
    
    
    printf("A media dos numeros e %.2f, o maximo e %.2f e o minimo e %.2f.\n",avg,max,min);

    return 0;
}