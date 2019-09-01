#include <stdio.h>

int main(){
    int numero = 0;
    int somaP = 0;
    int somaI = 0;
    scanf("%d",&numero);
    
    for(int i = 0; i < 20; i++){

        int digito = numero%10;

        if( i % 2 == 0)
            somaP = somaP+digito;
        else
            somaI = somaI+digito;
         numero = numero/10;
    }

    int calc = somaP-somaI;
        if(calc < 0)
            calc = calc *(-1);

        if(calc%11==0)
            printf("sim");
        else 
            printf("nao");
        
        
    return 0;

}