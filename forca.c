#include <stdio.h>
#include <string.h>

#define size 100 

int main(){
    char frase[size];
    char chutes[100];
    char aux[100];
    char marca;
    scanf("%[^\n]\n", frase);
    scanf(" %[^\n]\n", chutes);
    scanf(" %c", &marca);
    
    for(int i = 0; i < strlen(frase);i++)
        aux[i] = marca;
    
    for(int i = 0; i < strlen(frase);i++){
        for(int j = 0; j < strlen(chutes); j++){
            if(chutes[j] == frase[i]){
                aux[i] = chutes[j];
            }
        }
    }
        for(int i = 0; i < strlen(aux);i++)
            printf("%c",aux[i]);
        return 0;
}