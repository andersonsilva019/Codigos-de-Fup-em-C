#include <stdio.h>

int main(){
    int qtd_numeros,limiteI,limiteS,i,elementos,cont=0;
    scanf("%d %d %d",&qtd_numeros,&limiteI,&limiteS);
    
    for(i=1;i<=qtd_numeros;i++){
        scanf("%d",&elementos);
            if(elementos >= limiteI && elementos <=limiteS){
                cont++;
            }
    } printf("%d",cont);
}