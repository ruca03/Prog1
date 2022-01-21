#include <stdio.h>
#include <stdlib.h>



float rando(){
    
    return rand()/(float)RAND_MAX;

}


int main(){

    int m=0, n,i=0;
    float x,y;

    printf("Numero lancamentos? ");
    scanf("%d", &n);

    for(i=1;i<n+1;i++)
    {
        x=rando();
        y=rando();

        if ((x*x + y*y) < 1)
            m++;
        
        printf("pi: %f\n",4*m*1.0/i);
    }   

}