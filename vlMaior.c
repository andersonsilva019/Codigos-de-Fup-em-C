#include <stdio.h>

int main()
{
    int n_tabuleiro;
    int x,y,xFinal,yFinal;
    char direcao;
    int tempo;
    
    scanf("%d %d %d %c %d",&n_tabuleiro,&x,&y,&direcao,&tempo);
    //scanf("%d",&tempo);
    
    if(direcao == 'R')
    {
        xFinal = x += tempo;
            if(xFinal > n_tabuleiro)
            {
                xFinal = xFinal - n_tabuleiro;
                yFinal = y;
            }
        printf("%d %d",xFinal,yFinal);
    }
    else if(direcao == 'U')
    {
        yFinal = y -= tempo;
            if(yFinal < 0)
            {
                yFinal = yFinal + n_tabuleiro;
                xFinal = x;
                printf("%d %d",xFinal,yFinal);
            }
    }
    else if(direcao == 'L')
    {
            xFinal = x = x - tempo;
            if(xFinal < 0)
            {
                xFinal = xFinal *(-1);
                if(xFinal < n_tabuleiro)
                xFinal = xFinal + n_tabuleiro;
                yFinal = y;
            }
        printf("%d %d",xFinal,yFinal);
    }
    else if(direcao == 'D')
    {           

                yFinal = y += tempo;
            
            if(yFinal > n_tabuleiro)
            {
                yFinal = yFinal - n_tabuleiro;
                xFinal = x;
                printf("%d %d",xFinal,yFinal);
            }
    }
    
}