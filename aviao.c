#include <stdio.h>
#include <math.h>

int main(){
    char operacao;
    float nota;
    scanf("%c %f",&operacao,&nota);

    
    if (operacao == 'r'){
        printf("%.1f",round(nota));
    } else if(operacao =='f'){
        printf("%.1f",floor(nota));
    } else if(operacao =='c'){
        printf("%.1f",ceil(nota));
    }
}