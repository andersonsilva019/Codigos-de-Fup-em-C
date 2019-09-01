  #include <stdio.h>
    
    int main(){
        int somaC = 0;
        int somaL = 0;
        int somaP = 0;
        int soma = 0;
        int mat[3][3];
        
        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                scanf("%d",&mat[i][j]);
        
        //secundaria
        int m = 0, n = 2;
        while(m < 3 && n >=0){
            soma += mat[m][n];
            m++;
            n--;
        }
        // principal
        for(int i = 0; i < 3; i++){
            int  j = i;
            somaP += mat[i][j];
            if(somaP != soma){// compara a soma da diagonal principal com a soma da diagonal secundaria
                printf("nao");
                return 0; // encerra o código
            }
        }
        // linha
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
              somaL = somaL+mat[i][j];
                if(somaL != soma){ // compara a soma de cada linha com a soma da diagonal secundaria
                    printf("nao");
                    return 0; // encerra o código
                }
            }
        }
            
        //coluna
        for(int j = 0; j < 3; j++){
            for(int i = 0; i < 3;i++){
                somaC = somaC+mat[i][j];
                    if(somaL != soma){ // compara a soma de cada liha com a soma da diagonal secundaria
                    printf("nao");
                    return 0;
                }
            }
        }
        
            printf("sim");
        
    }