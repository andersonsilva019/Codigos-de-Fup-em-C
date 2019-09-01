#include <stdio.h>

int main()
{
    int qtdFiguras,qtdAlbum,cont =0;
    int encontrou;
    
    scanf("%d",&qtdFiguras);
    
    scanf("%d",&qtdAlbum);
    int figuras[qtdAlbum];
    
    for(int i = 0; i <= qtdAlbum -1;i++)
        scanf("%d",&figuras[i]);
    
        for(int i = 1; i <= qtdAlbum -1;i++)
        {
            if(figuras[i] == figuras[i-1])
                {
                    printf("%d ",figuras[i]);
                    cont++;
                }
            if(cont == 0)
            printf("N");
        } 
    
 printf("\n");
        
    for(int i = 1; i <= qtdAlbum; i++)
        }
        for(int j = 1; j <=i; j++)
        {
            if (figuras[i] == figuras[j])
                {
                    printf("%d",figuras[i]);
                }
            }      
        }
        
        
            /*if(encontrou == 0)
                printf("N");  
            else
                printf("%d\n",encontrou);*/








