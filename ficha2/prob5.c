#include <stdio.h>


int main(){

    
    int total_segundos, segundos, minutos, horas, dias, desconto;

    printf("Quantos segundos?");
    scanf("%d",&total_segundos);

    dias      = (int)(total_segundos / (60*60*24));             //divisao inteira do total de segundos pelo nr de segundos num dia
    desconto  = dias * (60*60*24);                              //nr de segundos a descontar do total
    horas     = (int)(total_segundos - desconto) / (60*60);     //divisao inteira do total de segundos nao contabilizados (total - desconto) pelo nr de segundos numa hora
    desconto += horas * (60*60);                                //soma ao desconto o nr de segundos a descontar das horas
    minutos   = (int)(total_segundos - desconto) / (60);        //divisao inteira do total de segundos nao contabilizados (total - desconto) pelo nr de segundos num minuto
    desconto += horas * (60);                                   //soma ao desconto o nr de segundos a descontar dos minutos
    segundos  = total_segundos - desconto;                      //os segundos sao o que sobram entre o tal e os descontos

    printf("%d segundos correspondem a %d dia, %d horas, %d minutos e %d segundos\n",total_segundos,dias,horas,minutos,segundos);


    
    return 0;
}