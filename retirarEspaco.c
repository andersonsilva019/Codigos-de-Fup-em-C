#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    
    char frase[200];
    scanf("%[^\n]", frase);
    
    printf("%c",frase[0]);
    
    for(int i = 1; i < strlen(frase);i++){
        if(frase[i]==' ' && frase[i-1]==' ')
        printf("%c",frase[i]);
    }       
}