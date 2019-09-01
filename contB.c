#include <stdio.h>

int main(){
    int n = 0,M = 0;
    char L = 0;
    int total = 0;

    //Dois vetores para o armazenamento de sapatos do pé D e E ---- contador
    scanf("%d",&n);
    int vetorD[61], vetorE[61];

    //Iniciando minhas posiçoes todas em 0 para poder fazer a contagem de quantos pares tem
    for (int i = 30; i <= 60; i++){
        vetorD[i] = 0;
        vetorE[i] = 0;
    }

    /* Lendo o tamanho do sapato e o pé --- Se o lado for 'E' então faço um incremento
    na posição M do meu vetorE[]*/
    for(int i = 0; i< n; i++){
        scanf("%d %c",&M,&L);
        if( L =='E'){
            vetorE[M]++;
        }else{
            vetorD[M]++;
        }
    }
    //Verificando se o meu vetorD[i] é menor que o vetorE[i], caso seja total recebe total + vetorD[i]
    for(int i = 30; i <= 60; i++){
       if(vetorD[i] < vetorE[i]){
           total += vetorD[i];
       }else{
           total += vetorE[i];
       }
    }
    // imprimindo o total de pares encontrados
    printf("%d",total);
    return 0;
}
