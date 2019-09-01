#include <stdio.h>
#include <string.h>

int main(){
    
    int n_inteC = 0;
    int n_inteH = 0;
    int somaH = 0;
    int somaC = 0;
    int poderH = 0;
    int poderC = 0;
    int maiorH = 0;
    int maiorC = 0;
    char timeC[100];
    char timeH[100];
    
    scanf("%d",&n_inteH);
    
    for(int i = 0; i < n_inteH; i++){
        for(int j = 0; j < strlen(timeH);j++){
        scanf("%[^\n]s", timeH);
        scanf("%d", &poderH);
        if(poderH > maiorH)
            maiorH = poderH;
    
            somaH = somaH + poderH;
        }
    }
    
    scanf("%d",&n_inteC);
    
    for(int i = 0; i < n_inteC; i++){
        scanf("%[^\n]s", timeC);
        scanf("%d", &poderC);
         if(poderC > maiorC)
            maiorC = poderC;
        
        somaC = somaC + poderC;
    }
    
    if(somaC > somaH){
        printf("Team Captain Wins\n " );
        if(poderC > poderH)
            printf("%s", timeC);
    }
        
        
}