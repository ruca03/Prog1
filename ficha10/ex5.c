#include <stdio.h>
#include <string.h>

#define TAM_MAX 100

typedef struct{
    char nome[20];
    char marca[20];
    char modelo[20];
    float preco;
    int quant;
} artigo;

int leArtigos(artigo armazem[], char *nomeFicheiro){
    
    if (strlen(nomeFicheiro)<4)             //nome menor que 4 porque precisa no minimo 5 caracteres. 3 para o tipo de ficheiro +1 para o ponto. Ex: a.txt
        return -1;

    FILE *file;
    file = fopen(nomeFicheiro,"r");

    if (file == NULL)
        return -1;                          //nao conseguiu abrir ficheiro 
    
    char lnome[20],lmarca[20],lmodelo[20];
    float lpreco;
    int lquant,i=0;
    while(i<TAM_MAX){
        // scanf lê até encontrar um espaço quando se usa %s
        if (fscanf(file,"%s %s %s %f %d",lnome, lmarca, lmodelo, &lpreco, &lquant)<5)
            break;
        
        strcpy(armazem[i].nome,lnome);
        strcpy(armazem[i].marca,lmarca);
        strcpy(armazem[i].modelo,lmodelo);

        armazem[i].preco=lpreco;
        armazem[i].quant=lquant;

        i++;
    }

    fclose(file);
    return i;
}


int totalArtigos(artigo armazem[], int n, char *marca, char *modelo){

    int i,total=0;

    for(i=0;i<n;i++){
        if (strcmp(armazem[i].marca,marca)==0 && strcmp(armazem[i].modelo,modelo)==0)
            total++;
    }

    return total;
}


void alertaArtigos(artigo armazem[], int n){

    int i=0;
    
    for(i=0;i<n;i++){

    }
}
int main(){

    artigo armazem[TAM_MAX];
    char nome_ficheiro[20];

    int n = leArtigos(armazem,"artigos.txt");

    printf("%d\n",n);
    printf("dados=%s\t %s\t %s\n",armazem[0].nome,armazem[0].marca,armazem[0].modelo);
    
    printf("total=%d\n",totalArtigos(armazem, n, "SuperTV", "S-40"));
    
    
    return 0;

}