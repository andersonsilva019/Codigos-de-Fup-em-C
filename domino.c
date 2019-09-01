#include <stdio.h>

int crescente (int vetor1[], int n ){

    int cont;
    for(int i = 0; i <= (n -1); i++){    
        if(vetor1[i] <= vetor1[i+1])
            return  (1);
        else
            return (0);
    }
}
//https://respostas.guj.com.br/2848-duvida-verificar-vetores-em-ordem
int main(){

    int n;
    scanf("%d",&n);
    int vetor[n];

     for (int i = 0; i < n; i++)
        scanf("%d",&vetor[i]);

    if(crescente(vetor,n) == 1)
        printf("ok");
    else
        printf("precisa");

        return 0;
}