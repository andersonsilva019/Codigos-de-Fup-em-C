/*#include <stdio.h>
#include <string.h>

int main(){
    char texto[100];
    scanf("%[^\n]s",texto); // lê apenas uma palavra , ou seja, até espaço

    for(int i = 0; texto[i] != 0; i++){
        printf("%c",texto[i]);
    }
     for(int i = 0;i < strlen(texto) != 0; i++){
        printf("%c",texto[i]);
    }
    return 0;

    //strlen diz a quantidade da string

}*/
#include <string.h>
#include <stdio.h>


int main(){
    char s1[100], s2[100];
    scanf("%[^\n]s",s1);
    scanf("%[^\n]s",s2);
    if(strcmp(s1,s2) == 0)
        printf("%s %s sao iguais");
    else   
        puts("São diferentes");
}