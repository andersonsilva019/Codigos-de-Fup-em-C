#include <stdio.h>

void ImprimiqtdLed(int cont){
    
    printf("%d leds",cont);
}

int contarLed_digito(int digito){

    int cont = 0; 
    for(int i = 0; i < 8;i++){ // a condição não pode ser a variavel digito
            int n_led = digito%10;
            digito = digito/10; // Retiro o ultimo digito

        if(n_led == 0 && digito ==0)
                break;
            if(n_led == 1)
                cont = cont + 2;
            else if(n_led == 2)
                cont = cont + 5;
            else if(n_led == 3)
                cont = cont + 5;
            else if(n_led == 4)
                cont = cont + 4;
            else if(n_led == 5)
                cont = cont + 5;
            else if(n_led == 6)
                cont = cont + 6;
            else if(n_led == 7)
                cont = cont + 3;
            else if(n_led == 8)
                cont = cont + 7;
            else if(n_led == 9)
                cont = cont + 6;
            else if(n_led == 0)
                cont = cont + 6;

            
        }
        return cont;
}

int main(){
    
    int qtd = 0;
    scanf("%d",&qtd); // quantidade de casos e testes

    for(int i = 0; i < qtd; i++){
        
        int digito = 0;
        scanf("%d",&digito); 

       //qtd = contarLed_digito(digito);
       ImprimiqtdLed(contarLed_digito(digito));
    }
    return 0;
}