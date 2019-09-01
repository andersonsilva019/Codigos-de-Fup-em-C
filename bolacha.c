#include <stdio.h>

void Fibonat(int ant1, int ant2, int n){
    int soma = 0;
    for(int i = 3; i <= n;i++){
        soma = ant1+ant2;
        printf("%d ",soma);
        ant1 = ant2;
        ant2 = soma;
    }
}

int main (){
 int num = 0;
 int ant1 = 1 , ant2 =1;
 printf("Digite um numero");
 scanf("%d",&num);

    if(num ==1)
        printf("1");
    else{
    printf("%d %d ",ant1,ant2);

        Fibonat(ant1,ant2,num);
    }

    return 0;
}