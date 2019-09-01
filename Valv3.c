

para criptografar
    ->ci = pi + ki(mod 26)
para descriptografar
    ->pi=ci-ki+26 (mod 26)


precidar de um vetor auxiliar
    -> enqunto frase[i] != '\n,' && frase[i] !=  ' '
    aux[i] = palavraChave[i]
#include <stdio.h>
#include <string.h>

int main(){
    
    char texto[100];
    char chave[100];
    char ope;

    scanf("%[^\n]s", texto);
    scanf("%[^\n]s", chave);
    scanf("%c", &ope);

    for(int i = 0; texto[i] != '\n';i++){
        chave[i] = texto[i]
    }

    

}