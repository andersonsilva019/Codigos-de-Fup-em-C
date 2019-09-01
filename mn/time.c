#include  <stdio.h>
int main (){
    int cor, camp, local;

    printf("Digite 1 para time com uniforme colorido ou 2 para time com uniforme preto e branco\n");
    scanf("%d", &cor);

    printf("Digite 3 para time da capital ou 4 para time do interior\n");
    scanf("%d", &local);

    printf("Digite 5 para time que joga o brasileirão, ou 6 para time que não joga\n");
    scanf("%d", &camp);

    if (cor == 2 && local == 3 && camp == 5)
        printf("Ceará SC");
    else if (cor == 1 && local == 3 && camp == 5)
        printf("Fortaleza");
    else if (cor == 1 && local == 3 && camp == 6)
        printf("Floresta");
    else if (cor == 1 && local == 4 && camp == 6)
        printf("Guarani (s)");
    else 
        printf("Deu ruim");



        return 0;
}        