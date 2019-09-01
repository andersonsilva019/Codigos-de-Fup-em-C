#include <stdio.h>
    int main (){
        int camp, cor, local;

        printf("Se o time participa do campeonato brasileiro digite 1, se não, digite 2\n");
        scanf("%d", &camp);
        
        printf("Se o uniforme é colorido, digite 3, se é preto e branco digite 4\n");
        scanf("%d", &cor);

        printf("Se o time é da capital, digite 5, se não digite 6 \n");
        scanf("%d", &local);
        
        switch (camp,cor, local){
        switch (camp, cor, local){
            case 1:
            case 4:
            case 5:
                printf("Ceará SC");

                break;
        }
    switch (camp, cor, local){
            case 1:
            case 3:
            case 5:
                printf("Fortaleza");
                break;
    }
    switch (camp, cor, local){
            case 2:
            case 3:
            case 5:
                printf("Floresta");
                break;
    }

    switch (camp, cor, local){
            case 2:
            case 3:
            case 6:
                printf("Guarani");
                break; 
                
                }
        
                default:
                    printf("Você inseriu algum dado inválido. Tente novamente");
        }
    

       

    return 0;
 }



























