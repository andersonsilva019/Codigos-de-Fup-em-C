#include <stdio.h>
#include <string.h>


int main(){
    char frase[100];
    int soma  = 0;
    int num = 0;
    
    scanf("%[^\n]", frase);
    
    for(int i = 0; i < strlen(frase);i++){
        if(frase[i] >='0' && frase[i] <='9'){
            num = 10 * num + (frase[i] - '0');
        }else{
            soma = soma + num;
            num = 0;
        }
    }
    soma = soma + num;
    printf("%d",soma);

    return 0;
}
