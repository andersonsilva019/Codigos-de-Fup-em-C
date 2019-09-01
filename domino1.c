#include <stdio.h>

int Exercicio11(int vet[],int tam){    int i;
    for(i=0;i<5;i++)    {    
          if(vet[i]<vet[i+1])    
            return(1);  
              }  
            return(0);
      }



int main(void){    int i,tam;    int vet[tam];
        printf("Digite o tamanho do vetor:");  
        scanf("%d",&tam);
    for(i=0;i<tam;i++)  {   
        printf("Digite o %do elemento do vetor:",i+1);      
        scanf("%d",&vet[i]);  
   }
    Exercicio11(vet,tam);
    printf("\n \n"); 
    
       
    
    return(0);}