#include <stdio.h>
#include <string.h>



int main(){
    
   char frase[40];
   char palavra1[40];
   char palavra2[40];

    for(int i = 0; i < 40;i++)
        frase[i] = '-';
    for(int i = 0; i < 40;i++)
        palavra1[i] = '-';
    for(int i = 0; i < 40;i++)
        palavra2[i] = '-';

    scanf("%[^\n]s", frase);
    scanf(" %[^\n]s", palavra1);
    scanf(" %[^\n]s", palavra2);

    for(int i = 0; i < strlen(frase); i++){
        for(int j = i; j < strlen(frase);j++ ){
            if(frase[j] == palavra1[i]){
                frase[j] = palavra2[i];
                
            }
        }
    }
    for(int i = 0; i < strlen(frase);i++){
        printf("%c", frase[i]);
    }
    return 0;
}
