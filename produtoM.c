#include <stdio.h>

int main(){
    
    
    int linha = 0;
    int coluna = 0;
    
    scanf("%d\n%d",&linha,&coluna);
    
    int matA[linha][coluna]; // matriz 1 
    
    int colB = 0;
    scanf("%d",&colB);

    // le os valores da minha matriz1
    for(int i = 0; i < linha; i++)
        for(int j = 0; j < coluna; j++)
            scanf("%d",&matA[i][j]);
    
    int matB[coluna][colB];  // matriz 2 com as linhas sendo o mesmo valor da coluna da matriz 1
    
    for(int i = 0; i < coluna; i++)
        for(int j = 0; j < colB; j++)
            scanf("%d",&matB[i][j]);
            
    int pro[linha][colB];
    
    // calculo
    for(int i = 0; i < linha; i++){ 
        for(int j = 0; j < colB;j++){
            pro[i][j] = 0;
            for(int k = 0; k < coluna;k++) // passa a ser coluna na matA e passa a ser linha na matB
                    pro[i][j] = pro[i][j] + matA[i][k] * matB[k][j];
        }
    }

    for(int i = 0; i < linha;i++){
        for(int j = 0; j < colB; j++){
            printf("%d ",pro[i][j]);
        }
            puts("");
    }
}