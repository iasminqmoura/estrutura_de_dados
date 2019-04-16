#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5
//02) Personagem caminhando em um mapa. (1) Primeiro faça uma matriz 5x5 preenchida aleatoriamente com 0 e 1. 
//Essa matriz será o mapa do jogo. Essa matriz será impressa várias vezes. (2) Então, faça um procedimento que imprima essa matriz. 
//Existe um personagem no jogo que vai andar por este mapa. (3) Crie duas variáveis para guardar a posição X e Y do personagem (X para linha, e Y para coluna, do mapa), 
//e inicialize essa posição para o meio do mapa (ou seja X=2 e Y=2). (4) Faça um menu com uma estrutura de repetição para receber do usuário qual caminho o personagem deve tomar 
//([1] Cima, [2] Baixo, [3] Direita, [4] Esquerda, [0] Sair do jogo). (5) Imprima o mapa do jogo, e no local da posição atual do personagem, imprima uma letra qualquer. 
//A cada decisão que o usuário tomar, imprima o mapa de novo com a posição atualizada.

int mat[SIZE][SIZE];
int posX, posY;

void mostrar_mapa()
{
	int i, j;
	
	printf("+");
	
	for(i = 0; i < SIZE; i++)
	{
		printf("---");
	}
	
	printf("+\n");
	
	for(i = 0; i < SIZE; i++)
	{
		printf("|");
		for(j = 0; j < SIZE; j++) 
		{
			if(i == posX && j == posY)
			{
				printf("\\o/");
			}
			else 
			{
				printf(mat[i][j] == 1 ? "   " : "[X]");
			}
		}
		printf("|\n");
	}
	
	printf("+");
	
	for(i = 0; i < SIZE; i++)
	{
		printf("---");
	}
	
	printf("+\n");
}

int main()
{
	int i, j, opcao;
	srand(time(NULL));
	
	// Preencher aleatoriamente com 0s e 1s.	
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			mat[i][j] = rand() % 2;
		}
	}
	
	// Colocar jogador na posicao inicial
	posX = 2;
	posY = 2;
	
	// Repetir
	while(1) 
	{
		// Limpar tela
		system("cls");
		
		// Mostrar mapa
		mostrar_mapa();
		
		// Mostrar menu
		printf("Escolha um movimento:\n");
		printf("[1] Cima\n");
		printf("[2] Baixo\n");
		printf("[3] Direita\n");
		printf("[4] Esquerda\n");
		printf("[0] Sair do jogo\n");
		printf(" > ");
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
				if(posX - 1 < 0 || mat[posX - 1][posY] == 0)
				{
					continue;
				}
				
				posX--;
				
				break;
				
			case 2:
				if(posX + 1 >= SIZE || mat[posX + 1][posY] == 0)
				{
					continue;
				}
				
				posX++;
				
				break;
				
			case 3:
				
				if(posY + 1 >= SIZE || mat[posX][posY + 1] == 0)
				{
					continue;
				}
				
				posY++;
				
				break;
				
			case 4:
				if(posY - 1 < 0 || mat[posX][posY - 1] == 0)
				{
					continue;
				}
				
				posY--;
				
				break;
				
			case 0:
				
				return;
				
			default:
				
				printf("Opcao invalida.\n");
				system("pause");
				break;
		}
	}
	return 0;
}
































