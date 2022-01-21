#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define SEPARATOR "#<ab@17943918#@>#"

#define TAM_MAX 20

int rmv_signs(char entrada[], int n, char saida[])
{
    int i=0,j=0;
    
    if (n<1 || n>TAM_MAX)
        return 0;
    
    for(i=0;i<n;i++){
        if ((entrada[i]>='a' && entrada[i]<='z') || (entrada[i]>='A' && entrada[i]<='Z')){
            saida[j] = entrada[i];
            j++;
        }
    }
    return j;
}

void imprime_vetor(char v[], int n);

int main() {
    char v1[TAM_MAX] = { 'p', 'r', '0', '.', 'o', '_', '=', 'G', 'r', '*', ':', 'a', '<', ')', 'm', 'a', 'c', ',', 'a', 'o'};
    char res[TAM_MAX];
    int tam;

/*  Teste n1*/
    printf("\\*************************/\nTeste n1\n");
    tam = rmv_signs(v1, 5, res);
    imprime_vetor(res, tam);

/*  Teste n2*/
    printf("\\*************************/\nTeste n2\n");
    tam = rmv_signs(v1, 0, res);
    imprime_vetor(res, tam);

/*  Teste n3*/
    printf("\\*************************/\nTeste n3\n");
    tam = rmv_signs(v1, 20, res);
    imprime_vetor(res, tam);

/*  Teste n4*/
    printf("\\*************************/\nTeste n4\n");
    printf("%d\n", tam);

/*  Teste n5*/
    printf("\\*************************/\nTeste n5\n");
    tam = rmv_signs(v1, 30, res);
    imprime_vetor(res, tam);

/*  Teste n6*/
    printf("\\*************************/\nTeste n6\n");
    printf("%d\n", tam);

/*  Teste n7*/
    printf("\\*************************/\nTeste n7\n");
    tam = rmv_signs(v1, 2, res);
    imprime_vetor(res, tam);
}

void imprime_vetor(char v[], int n)
{
    int i;
    printf("{");
    for(i=0; i<n; i++)
        printf(" %c", v[i]);
    printf(" }\n");
}