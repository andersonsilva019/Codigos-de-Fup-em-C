#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a,&b,&c);

    int soma = a+b+c;

    if(soma ==1)
        printf("a");
    else if(soma ==2)
        printf("b");
    else if(soma ==3)
        printf("c");
    else if(soma %26 == 1)
        printf("a");
}