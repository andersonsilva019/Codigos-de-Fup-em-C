#include <stdio.h>
#include <limits.h>

int main(){
    int vetor[5];
    int menor = INT_MAX;
    int vm = 0;
    int soma =0;
    
    for(int i = 0; i < 5; i++)
    scanf("%d",&vetor[i]);
    
    for(int i = 0;i < 5; i++){
        if (vetor[i] < menor)
            menor = vetor[i];
        else 
            vm = vetor[i];
    }   
    
    soma = menor+vm;
    printf("%d",soma);

    return 0;
}