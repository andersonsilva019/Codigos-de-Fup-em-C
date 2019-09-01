#include<stdio.h>

int main(void)
{
	char nome[21];
	float beleza=0,simpatia=0,gostosura=0;
	int resp;
	
	do
	{
        printf("Digite o nome da Garotinha:");
            scanf(" %[^\n]",nome);
		printf("%s: Digite de 0 à 10 para o quesito Beleza:",nome);
		    scanf("%f",&beleza);
        printf("%s: Digite de 0 à 10 para o quesito Simpátia:",nome);
		    scanf("%f",&simpatia);
		printf("%s: Digite de 0 à 10 para o quesito Gostosura:",nome);
		    scanf("%f",&gostosura);
		
		float media = (beleza + simpatia + gostosura)/3;
		printf("%s é %.1f/10\n",nome,media);
		
		printf("Digite 1 para julgar a próxima garotinha ou 2 para encerrar\n");
		scanf("%d", &resp);
	
	}while (resp==1);
	
	return 0;
}