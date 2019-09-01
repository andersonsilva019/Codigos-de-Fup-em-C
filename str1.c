#include <stdio.h>

#include <string.h>

int main(){
    int cont = 0;
    char texto[100];
    char letra = 0;
    scanf("%[^\n]s",texto);
    scanf(" %c",&letra);
    
   for(int i = 0; i < strlen(texto); i++){
       if(letra == texto[i])
                cont++;
   }
   printf("%d",cont);
    
}