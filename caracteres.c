#include <stdio.h>

int main(){
    int rotacao;
    char c;
    int letras =  26 ;
    scanf("%c %d",&c,&rotacao);
    
    if(rotacao > 0){
        c = c + rotacao;
        printf("%c",c);
    }
    if(rotacao < 0){
         c = c - rotacao;
        printf("%c",c);
    }
        
}