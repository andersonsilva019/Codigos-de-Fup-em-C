#include <stdio.h>

int main(){
    int size = 0;
    scanf("%d",&size);
    int vet[size];

    for(int i = 0; i < size; i++)
        scanf("%d",&vet[i]);

    for(int i = 0; i < size; i++){
        if(i%2==0)
            vet[i] = vet[i]*2;
        else
            vet[i] = vet[i]+5;
    }

    for(int i = 0; i < size; i++)
        printf("%d ",vet[i]);
}


n1 ==(n1+1)%9;