#include <stdio.h>
int soma (int a,int b){
    return a+b;
}

int dobro (int x)
{
    int y = 2*x;
    return y;
}

int main(){
    
    int w = soma(1,2);
    printf("%d",dobro(w));

}

