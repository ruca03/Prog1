#include <stdio.h>


int main(){
    int count_a = 0, count_e = 0, count_i = 0, count_o = 0, count_u = 0;
    char input;

    printf("Qual é a frase?\n");

    do{
        scanf("%c",&input);

        switch (input)
        {
        case 'a':
        case 'A':
            count_a++;
            break;
        case 'e':
        case 'E':
            count_e++;
            break;
        case 'i':
        case 'I':
            count_i++;
            break;
        case 'o':
        case 'O':
            count_o++;
            break;
        case 'u':
        case 'U':
            count_u++;
            break;
        default:
            break;
        }
    }
    while ('.' != input);

    printf("A - %d\n", count_a);
    printf("E - %d\n", count_e);
    printf("I - %d\n", count_i);
    printf("O - %d\n", count_o);
    printf("U - %d\n", count_u);
    
}