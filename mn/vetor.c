#include <stdio.h>

int main()
{
    int caso;
    scanf("%d",&caso);
    
    int n,grito;
    
    for(int i=0;i<caso;i++)
    {
        scanf("%d %d",&n,&grito);
    
        int vetor[n];
    
        for(int i=0;i<n;i++)
        {
            scanf("%d",&vetor[i]);
        
        }
        for(int i=0;i<n;i++){
            if(grito==vetor[i]){
            vetor[i-1]=-vetor[i-1];
            vetor[i+1]=-vetor[i+1];
            }
        }
    
        for(int i=0;i<n;i++){
            printf("%d ",vetor[i]);
        }
    }
}