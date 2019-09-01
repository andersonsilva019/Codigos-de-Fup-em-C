#include <stdio.h>
#include <string.h>

int main(){
    int cont = 0;
    int igual;
    char frase[100];
    char aux[100];
    scanf("%s",aux);
    
    for(int i = 0; i <strlen(aux);i++){
        for(int j = i+1; j < strlen(aux);j++){
            if(aux[i] == aux[j])
                aux[i] = '-';
        }
    }
    
    while(scanf("%s", frase) > 0){
        for(int i = 0; i < strlen(aux);i++){
            igual = 0;
            for(int  j = 0; j < strlen(frase);j++){
                if(frase[j] == aux[i]) igual = 1;
            }
            if(!igual) aux[i] = '-';
        }
    }
    for(int i = 0; i < strlen(aux);i++){
        if(aux[i] != '-')
            cont++;
    }
    printf("%d",cont);
}