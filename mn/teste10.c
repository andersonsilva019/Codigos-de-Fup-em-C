#include <stdio.h>
    2 
    3 int main(void){
    4     int qtd_elementos,i,elemento,somaJ,somaS;
    5     scanf("%d",&qtd_elementos);
    6 
    7     for(i=1;i<=qtd_elementos;i++){
    8         scanf("%d",&elemento);
    9 
   10         if(qtd_elementos==2){
   11             if(i==1){
   12                 somaJ = somaJ+elemento;     
   13             }else if(i==2){
   14                  somaS = somaS +elemento;
   15             }
   16         }
   17         
   18         if(i<=qtd_elementos/2){
   19            somaJ = somaJ+elemento;
   20        }else if(i>qtd_elementos/2){
   21            somaS = somaS +elemento;
   22        }
   23         
   24     }
   25     
   26     
   27     if(somaJ > somaS){
   28         printf("Jedi");
   29     }else if(somaJ==somaS){
   30         printf("Empate");
   31     }else if(somaS > somaJ){
   32         printf("Sith");
   33     }
   34 
   35 
   36     return 0;
   37 }