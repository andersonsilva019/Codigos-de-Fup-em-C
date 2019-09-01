#include <stdio.h>

int main(){
     
    
    int n_botas;
    
    scanf("%d",&n_botas);
    int vetorB[n_botas];
    char lado[n_botas];
    
    int contaBotas = 0;
    
     
    for(int i = 0; i < n_botas; i++)
    {
        scanf("%d %c",&vetorB[i],&lado[i]);
        
    }
    
    for (int i = 0; i < n_botas; i++)
    {
       for(int j = i + 1; j < n_botas; j++)
       {
            if(vetorB[i]==vetorB[j] && lado[i] != lado[j])
            {
                     contaBotas++;
                     
            }
       }
    }
            printf("%d",contaBotas);
        return 0;
}



