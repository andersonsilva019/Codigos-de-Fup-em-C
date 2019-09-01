
 #include <stdio.h>
 
 int main() {
     char letra, soma;
     int rotacao;
     scanf("%c", &letra);
     scanf("%d", &rotacao);
     
 
     soma=letra+rotacao;
     
     if(soma<'a') {
         soma='a'-soma;
         soma=('z'+1)-soma;
         printf("%c",soma);
         
     } else if(soma >'z') {
         soma=soma-'z';
         soma=('a'-1)+soma;
         printf("%c",soma);
         
     }else {
         printf("%c",soma);
     }
     
 }