#include <stdio.h>

int main(void){
    int qtd_elementos,i,elemento,somaJ,somaS;
    scanf("%d",&qtd_elementos);

    for(i=1;i<=qtd_elementos;i++){
        scanf("%d",&elemento);

        if(qtd_elementos==2){
            if(i==1){
                somaJ = somaJ+elemento;     
            }else if(i==2){
                 somaS = somaS +elemento;
            }
        }
        
        if(i<=qtd_elementos/2){
           somaJ = somaJ+elemento;
       }else if(i>qtd_elementos/2){
           somaS = somaS +elemento;
       }
        
    }
    
    
    if(somaJ > somaS){
        printf("Jedi");
    }else if(somaJ==somaS){
        printf("Empate");
    }else if(somaS > somaJ){
        printf("Sith");
    }


    return 0;
}
