#include <stdio.h>
int faltaN(int v[],int t)
{
    int n = v[n];
    int soma = n*(n-1)/2;

    for(int i = 0; i<n;i++)
    {
        soma -= v[i];

    }

    return soma;
}



int main()
{
    int n;
    scanf("%d",&n);
    int vetor[n];

    int r = faltaN(vetor,n);
    printf("%d",r);
}