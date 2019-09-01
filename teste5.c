#include <stdio.h>
#include <stdlib.h>

int verifica_ordem(int vet[])
{
   int MAX;
   scanf("%d",&MAX);
   int vet[MAX];
   
   int i, cont = 0, cont2 = 0;
   for (i = 0; i < MAX; i++) {
    if (vet[i] <= vet[i + 1])
	    cont++;
   }
   if (cont == (MAX - 1))
    return 1;
   else {
    for (i = 0; i < MAX; i++) {
	    if (vet[i] > vet[i + 1])
		    cont2++;
    }
    if (cont2 == (MAX))
	    return -1;
    else
	    return 0;
   }
}
int main()
{
   int i, res, vet[MAX];
   for (i = 0; i < MAX; i++) {
    scanf("%d", &vet[i]);
   }
   res = verifica_ordem(vet);
   if (res == 1)
    printf("O vetor esta em ordem nao decrescente\n");
   else if (res == -1)
    printf("O vetor esta em ordem nao crescente\n");
   else
   printf("O vetor nao esta ordenado\n");
   return 0;
}