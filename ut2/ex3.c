#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define SEPARATOR "#<ab@17943918#@>#"

#define TAM_MAX 20

int add_pos(int entrada[],int k,int x, int n, int saida[])
{
    int i;
    
    if (x<1 || x>n+1 || x>TAM_MAX)
        return 0;
    if (n<1 || n>TAM_MAX)
        return 0;
    
    for(i=0;i<n+1;i++){
        if (i == x-1)
            saida[i] = k;
        else if (i > x-1)
            saida[i] = entrada[i-1];
        else
            saida[i] = entrada[i];
    }

    return i;
}

void imprime_vetor(int v[], int n);

int main() {
    int v1[TAM_MAX] = { 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233};
    int res[TAM_MAX];
    int tam;

/*  Teste n1*/
    printf("\\*************************/\nTeste n1\n");
    tam = add_pos(v1, 0, 5, 12, res);
    imprime_vetor(res, tam);

/*  Teste n2*/
    printf("\\*************************/\nTeste n2\n");
    tam = add_pos(v1, 0, 0, 12, res);
    imprime_vetor(res, tam);

/*  Teste n3*/
    printf("\\*************************/\nTeste n3\n");
    tam = add_pos(v1, 0, 1, 12, res);
    imprime_vetor(res, tam);

/*  Teste n4*/
    printf("\\*************************/\nTeste n4\n");
    tam = add_pos(v1, 0, 12, 12, res);
    imprime_vetor(res, tam);

/*  Teste n5*/
    printf("\\*************************/\nTeste n5\n");
    tam = add_pos(v1, 0, 13, 12, res);
    imprime_vetor(res, tam);

/*  Teste n6*/
    printf("\\*************************/\nTeste n6\n");
    tam = add_pos(v1, 0, 14, 12, res);
    imprime_vetor(res, tam);

/*  Teste n7*/
    printf("\\*************************/\nTeste n7\n");
    printf("%d\n", tam);

/*  Teste n8*/
    printf("\\*************************/\nTeste n8\n");
    tam = add_pos(v1, 0, 15, 23, res);
    imprime_vetor(res, tam);

/*  Teste n9*/
    printf("\\*************************/\nTeste n9\n");
    printf("%d\n", tam);
}

void imprime_vetor(int v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %d", v[i]);
    printf(" }\n");
}