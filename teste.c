#include <stdio.h>
#include <string.h>

int main(){
    char frase[100];
    int flag = 0;
    scanf("%[^\n]", frase);
    
    printf("%c",frase[0]);
    
    for(int i = 1; i < strlen(frase);){
        //printf("%c",frase[i]);
        if((frase[i] == ' ') && (frase[i+1] == 'a'  || frase[i+1] == 'e' || frase[i+1] == 'i'|| frase[i+1] =='o'|| frase[i+1] =='u') && 
        (frase[i-1] == 'a'  || frase[i-1] == 'e' || frase[i-1] == 'i' || frase[i-1] =='o'|| frase[i-1] =='u')){
           i++;
           flag = 1;
        }
        else
            printf("%c",frase[i]);
        
        if(flag == 0)
            i++;
            
        flag = 0;
    }
//    printf("%c",frase[strlen(frase)-1]);
}