#include <stdio.h>
#include <string.h>

int main(){
    
    int id_maior = 0;
    int id_aluno = 0;
    int media = 0;
    int maior_media = -1;
    int qtd_aluno;
    scanf("%d",&qtd_aluno);
    char vet[6];
    
    for(int i = 0; i < qtd_aluno;i++){
        scanf("\n%s",vet);
        media = ((vet[2]-'0') + (vet[3]-'0') + (vet[4]-'0') + (vet[5]-'0'))/4;
        id_aluno = 10*(vet[0]-'0') + (vet[1]-'0');
        if(media > maior_media){
            maior_media = media;
            id_maior = id_aluno;
        }
        if(media == maior_media && id_aluno > id_maior){
            id_maior = id_aluno;
        }
    }
        printf("%d",id_maior);

    return 0;
}


