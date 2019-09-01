#include <stdio.h>

int main (){
    char c = 0;
    int num = 0 ;
    int soma = 0 ;
    scanf("%c", &c);
    while(c != '\n'){
        if(c >='0' && c <='9'){
            num = 10 * num + (c -'0');
        }else{
            soma = soma+num;
            num = 0;
        }
        //scanf("%c", &c);
    }
    soma = soma+num;
    printf("%d",soma);
}