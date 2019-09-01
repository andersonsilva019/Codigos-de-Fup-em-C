#include <stdio.h>
    
int main(){
        char c = 0;
        int soma = 0;
        int somaC = 0;
        scanf("%c",&c);
       while(c != '\n'){
            soma += c;
            scanf("%c",&c);
        }
       somaC = soma%50;
        printf("%d",soma%50);
}