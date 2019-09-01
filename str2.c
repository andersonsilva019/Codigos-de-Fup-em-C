#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    char invertido[100];
    int i = 0;
    scanf("%[^\n]s", texto);
    
    for(int i = 0; i <strlen(texto); i++){
        invertido[100-i-1] = texto[i];
    }
    printf("%c",invertido[i]);
}