#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 08)Fa�a um jogo de adivinha��o. Gere um n�mero aleat�rio entre 0 e 100. O jogador tem cinco chances de acertar o n�mero. 
// A cada tentativa, o jogo informa ao jogador se o n�mero que ele tentou � menor ou maior do que o n�mero que foi gerado. 
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
				printf("Parab�ns! Voc� acertou!\n");
				break;
			}
			else 
			{
				printf("Que pena, voc� errou!\n");
				if(tentativa < numCerto) 
				{
					printf("O n�mero certo est� acima.\n");
				}
				else
				{
					printf("O n�mero certo est� abaixo.\n");
				}
			}
		}
		if(tentativas == 0) 
		{
			printf("Voc� perdeu!\nO n�mero certo era %d.\n", numCerto);
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
			printf("N�mero inv�lido.\n");
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
	printf("Deseja jogar novamente?\nUse 1 para sim ou outra coisa para n�o.\n> ");
	scanf("%d", &i);
	return i == 1;
}

int random(int min, int max) 
{
	return min + (rand() % (max - min + 1));
}
