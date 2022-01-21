#include <stdio.h>

int main()
{
    int n, i, con=1,times=0, pertence=0;
    printf("Escreva o nÃºmero para ver se faz parte da sequÃªncia de Connell\n");
    scanf("%d", &n);
    if (n==con)
    {
        pertence=1;
    }
    else
    {
        while(n>=con && times!= 100)
        {
            
            if(n==con)
            {
                pertence=1;
                break;
            }
            else
            {
                //printf("%d\t",con);
                for(i=0;i<times;i++)
                {
                    
                    con+=2;
                    //printf("%d\t",con);
                    if(n==con)
                    {
                        pertence=1;
                        break;
                    }
                    
                }
            }
            times++;
            con++;
            //printf("\n");
        }
    }
    if(pertence==1)
    {
        printf("O nÃºmero inserido pertence Ã  sequÃªncia de Connell\n");
    }
    else 
        printf("O nÃºmero inserido nÃ£o pertence Ã  sequÃªncia de Connell\n");
    
    
    return 0;
}