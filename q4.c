#include <stdio.h>
    
int main(){
    
    char c = 0;
    int soma = 0;
    int restS = 0;
    int vlAsco = 0;
    int menor = 50;
        
        scanf("%c",&c);
        while(c != '\n'){
            soma = soma + c;
            scanf("%c",&c);
        }
        vlAsco = soma %50;
        printf("%d\n",vlAsco);
        
        for(int i = 'a'; i <='z';i++ ){
            if((soma +i) % 50 == 0){
                restS = i;
                break;
            }else{
                int aux = (soma +i)%50;
                    if(aux < menor){

                        menor = aux;
                        restS = i;
                    }
            }
        }
        
        printf("%c\n",restS);
        
        int newP = (vlAsco + restS)%50; 
        printf("%d",newP);
}