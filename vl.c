#include <stdio.h>


void roda(int vet[], int size)
{
    int primeiro = vet[0];
    for(int i = 1; i < size;i++)
        vet[i -1] = vet[i];

    vet[size -1] = primeiro;
}


int main()
{
    int tamanho = 0;
    int espada = 0;
    
    scanf("%d %d",&tamanho,&espada);
    int v[tamanho];

    for(int i =0;i<tamanho;i++)
        v[i] = i+1;

    while(v[0] != espada)
        roda(v,tamanho);

    while (tamanho > 1)
    {
        roda(v,tamanho);// salvo --- pego o cara que tá com a espada e coloca no final
        //printf("Vai morrer %d\n",v[0]);
        roda(v,tamanho); // matar --- vai colocar o que vai morrer pro final 
        tamanho = tamanho -1; // matar -- diminui o vetor para remover o elemento morto
    }
        printf("%d",v[0]);

    return 0;
}