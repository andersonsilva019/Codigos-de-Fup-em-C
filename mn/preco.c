#include <stdio.h>
    int main (){

   int cod, qtd;

   printf("Digite o código:\n");
   scanf("%d", &cod);

   printf("Digite a quantidade:\n");
   scanf("%d", &qtd);

    int v1 = qtd * 10;
    int v2 = qtd * 15;
    int v3 = qtd * 20;
    int v4 = qtd * 30;

   switch(cod){
        case 1:
            printf("O valor é: %d reais\n",v1);
                break;
        case 2:
            printf("O valor é: %d reais\n", v2);
                break;
        case 3:
            printf("O valor é: %d reais\n", v3);
                break;
        case 4:
            printf("O valor é: %d reais\n", v4);
                break;
       default:
        printf("Algum dado inválido\n");
    break;


   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   /* int n1,n2,tipo;
    char op[4];

    printf("Digite n1 e n2\n");
    scanf("%d %d", &n1, &n2);

    printf("Digite o tipo de operação\n");
    scanf("%c",&op);

    printf("o tipo é %c", op);

    //printf("Os números são %d e %d", n1,n2);    

*/


        return 0;
}