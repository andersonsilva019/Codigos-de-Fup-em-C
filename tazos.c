#include <stdio.h>

int main(){
    int qtd = 0;
    int aux = 0;
    scanf("%d",&qtd);
    int vet[102];
    
    for(int i = 0; i < 102 ; i++)
        vet[i] = 0;
    
    for(int i = 0; i < qtd; i++){
        scanf("%d",&aux);
        vet[aux]++;
    }
    
    int maior = vet[0];
    
    for(int i = 0; i < 102; i++){
        if(vet[i] > maior)
            maior= vet[i];
    }
    
    for(int i = 0; i < 102; i++){
        if(vet[i] == maior)
            printf("%d ",i);
    }
}