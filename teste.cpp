#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<time.h>
int main(){
	char palavra[10][25]={"papel", "bola", "uva", "balao","copo","computador", "livro", "teclado","agua","lixeira"};
	char letra[25], lacuna[25]="-", palavra_secreta[20];
	int vida=3, x, i, pontos = 0;
	
	srand(time(NULL));
	int indice_palavra_aleatoria = rand()%10;
	//printf("%d",indice_palavra_aleatoria);
	//printf("%s", palavra[indice_palavra_aleatoria]);
	
	printf("Olá, seja bem vindo ao jogo da forca\n");
	printf("Este jogo conta com 10 palavras na memoria\n");
	printf("\n__________________________________________\n");
	
	int tam_palavra = strlen(palavra[indice_palavra_aleatoria]);
	
	for(i=0; i<tam_palavra; i++)
		lacuna[i]='-';
		
	while(vida>0)
	{
		x=0;
		printf("\n %s \n",lacuna);
		printf("\n digite uma letra: ");
		gets(letra);
		
	
		for(i=0; i<=tam_palavra; i++)
		{
			if(letra[0] == palavra[indice_palavra_aleatoria][i])
			{
				lacuna[i] = palavra[indice_palavra_aleatoria][i];
				pontos++;
				x++;
			}
		}
		
		if(x==0) 
		{
			vida=vida-1;
		
			if(vida==0)
			{
				printf("\n\n VOCE FOI ENFORCADO!");
				printf("\n A PALAVRA ERA: %s",palavra[indice_palavra_aleatoria]);
				break;		
			}
		
			else
				printf("\n VOCE ERROU! RESTAM %d MEMBROS(S)",vida); 
		}
		
		else
		{
			if(pontos==tam_palavra)
			{
				printf("\n\n VOCE GANHOU!");
				printf("\n A PALAVRA E: %s",palavra[indice_palavra_aleatoria]);
				break;
			}
		
		else 
			printf("\n VOCE ACERTOU UMA LETRA!");
		
		}
	}
	printf("\n\n");
	system("pause");
	return 0;
}
