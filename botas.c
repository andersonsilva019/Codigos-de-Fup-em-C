#include <stdio.h>

int main(){

         

    char lado;


    // Variaveis da quantidade de botas
    int n_botas;
    scanf("%d",&n_botas);
    int vetorB[n_botas];
    


    int contaBotas = 0;
     
    for(int i = 0; i < n_botas; i++)
    {
        scanf("%d %c",&vetorB[i],&lado);
    }
    
        
    
    for (int i = 0; i < n_botas; i++)
    {
       for(int x = i + 1; x < n_botas; x++)
       {
            if(vetorB[i]==vetorB[x])
                    contaBotas++;
       }

    }
        printf("%d",contaBotas);

        return 0;
}