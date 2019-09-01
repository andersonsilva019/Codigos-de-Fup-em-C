#include <stdio.h>
    
int main(){
    
    char c = 0;
    int soma = 0;
    int restS = 0;
        scanf("%c",&c);
        while(c != '\n'){
            soma = soma + c;
            scanf("%c",&c);
        }
        
        //restS = soma%50;
            
    // Verifica se existe alguma letra que somado com 'soma' e resto da divisao por 50 dê 0            
          for(int i='a'; i<='z'; i++) {
            if((soma+i)%50==0) {
                restS=i;
                break;
            }
        }
        
        if(restS==0) 
        printf("sem sorte");
        else 
        printf("%c",restS);
}