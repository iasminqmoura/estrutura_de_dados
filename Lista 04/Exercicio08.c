#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 08)Faça um jogo de adivinhação. Gere um número aleatório entre 0 e 100. O jogador tem cinco chances de acertar o número. 
// A cada tentativa, o jogo informa ao jogador se o número que ele tentou é menor ou maior do que o número que foi gerado. 
// Quando acertar, informe ao jogador que ele acertou e encerre o jogo.

int tentativas;
int numCerto;

void iniciarJogo();
int tentar();
int jogarNovamente();
int random(int min, int max);

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	do
	{
		iniciarJogo();
		
		for(; tentativas > 0; tentativas--) 
		{
			int tentativa = tentar();
			if(tentativa == numCerto) 
			{
				printf("Parabéns! Você acertou!\n");
				break;
			}
			else 
			{
				printf("Que pena, você errou!\n");
				if(tentativa < numCerto) 
				{
					printf("O número certo está acima.\n");
				}
				else
				{
					printf("O número certo está abaixo.\n");
				}
			}
		}
		if(tentativas == 0) 
		{
			printf("Você perdeu!\nO número certo era %d.\n", numCerto);
		}
	}
	while(jogarNovamente());
	return 0;
}

void iniciarJogo() 
{
	system("cls");
	tentativas = 5;
	numCerto = random(0, 100);	
}

int tentar() 
{
	int num;
	while(1) 
	{
		printf("Insira um numero de 0 a 100: ");
		scanf("%d", &num);
		if(num < 0 || num > 100) 
		{
			printf("Número inválido.\n");
		}
		else
		{
			break;
		}
		
	}
	return num;
}

int jogarNovamente() {
	int i;
	printf("Deseja jogar novamente?\nUse 1 para sim ou outra coisa para não.\n> ");
	scanf("%d", &i);
	return i == 1;
}

int random(int min, int max) 
{
	return min + (rand() % (max - min + 1));
}
