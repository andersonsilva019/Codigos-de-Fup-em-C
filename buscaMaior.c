#include <stdio.h>
#include <string.h>

int main(){
    int maior = 0;
    int cont = 0;
    int C_teste = 0;
    int primeiro = 0;
    char frase[50];
    scanf("%d\n",&C_teste);
    
    for(int i = 0; i < C_teste; i++){
        scanf("%[^\n]\n", frase);
        cont = 0;
        maior = 0;
        primeiro = 0;
        for(int j = 0; frase[j] != 0;j++){
            if(frase[j] == 'a' || frase[j] =='e' || frase[j] =='i' || frase[j] =='o' || frase[j] =='u'){
                cont++;
            if(!(frase[j] == 'a' || frase[j] =='e' || frase[j] =='i' || frase[j] =='o' || frase[j] =='u')){
                if(cont > maior){
                    maior = cont;
                    primeiro = j - maior + 1;
                }
                    cont = 0;
            }
        }
    }
    for(int i = primeiro; i < (primeiro+maior) ;i++)
        printf("%c", frase[i]);
        puts("");
    }
}