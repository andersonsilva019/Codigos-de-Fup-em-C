#include <graphics.h>
#include <stdio.h>
using namespace GraphicsLib;
Graphics graphics;
voidMainLoop(){
    graphics.SetColor(41, 156, 0);
    graphics.FillRectangle2D(0, 0, 800, 100);  //Desenha terreno
    graphics.SetColor(100, 100, 100);
    graphics.FillRectangle2D(200, 100, 400, 300);  //Desenha parede
    graphics.SetColor(255, 136, 0);
    graphics.FillTriangle2D(200, 300, 400, 300, 300, 450); //Desenha telhado
    graphics.SetColor(120, 76, 0);
    graphics.FillRectangle2D(300, 100, 370, 240);  //Desenha porta
    graphics.SetColor(9, 9, 100);
    graphics.FillRectangle2D(220, 150, 270, 220);  //Desenha janela
    graphics.SetColor(0, 0, 0);
    graphics.FillCircle2D(310, 170, 5, 20);  //Desenha maçaneta
    }
    int main(void){
        graphics.CreateMainWindow(800, 600, "Exemplo 01 -Casa");
        graphics.SetBackgroundColor(152,209,250);
        graphics.SetMainLoop(MainLoop);
        graphics.StartMainLoop();
        return 0;
        }