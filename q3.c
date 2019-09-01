#include <stdio.h>

int main(){
    char total_letras = 'z'- 'a' + 1;
    char letra, ope, rotacao, n;
    scanf("%c %c %c",&letra, &ope, &rotacao);
    
    n = rotacao - 'a';
    if(ope == '-'){
        n = n *-1;
    }

        letra = letra + n;

    while(letra > 'z'){
        letra = letra - total_letras;
    }
    while(letra < 'a'){
        letra = total_letras+ letra;
    }
    
    printf("%c",letra);
    
    
}