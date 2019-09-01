#include <stdio.h>

int main(){
    int salto = 0,prof = 0,escor = 0,sapo = 0,posicao = 0;
    scanf("%d %d %d",&prof,&salto,&escor);

    while((sapo+salto) < prof){
        printf("%d %d\n",sapo,salto);
        posicao = salto + sapo;
        if(posicao < prof)
        printf("%d %d\n",sapo,posicao);
        sapo = posicao - escor;
    }
}

