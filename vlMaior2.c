#include <stdio.h>

int main()
{
    int n_tabuleiro;
    int x,y,xFinal,yFinal;
    char direcao;
    int tempo;
    
    scanf("%d %d %d %c %d",&n_tabuleiro,&x,&y,&direcao,&tempo);
    //scanf("%d",&tempo);
    
    if(direcao == 'L')
    {
            xFinal = (x - tempo)+n_tabuleiro+1;
            printf("%d",xFinal);

            if(xFinal < 0)
            {
                xFinal ;
            }
    }
    
}