#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char frase[100];
    char subs[100];
    char troca[100];
    int cont=0;
    int contt=0;
    
    scanf("%[^\n]", frase);
    scanf(" %s\n", subs);
    scanf(" %s", troca);
    
    for(int i=0; i<strlen(frase); i++) {
        contt=i;
        for(int j=0; j<strlen(subs); j++,contt++) {
            if(frase[contt]==subs[j]) cont++;
            
        }
        
        if(cont==strlen(subs)) {
            printf("%s", troca);
            i=i+strlen(subs)-1;
            
        }else {
            printf("%c", frase[i]);
    
        }
        cont=0;
    }
}
