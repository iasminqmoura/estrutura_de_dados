#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	//07) Fa�a o jogo do par ou �mpar novamente, por�m single player (um jogador). Humano vs computador. 
	//O computador gera um n�mero aleat�rio entre 0 e 5, e o jogador escolhe um n�mero entre 0 e 5. 
	//Exiba todas as informa��es para verificar quem venceu.

	int par;
	int num1, num2;
	int soma;

	while(1)
	{
		printf("Jogador 1 - digite 1 para par ou 2 para �mpar: ");
		scanf(" %d", &par);
		
		if(par < 1 || par > 2)
		{
			printf("N�mero inv�lido. Insira 1 ou 2.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	printf("-- JOGO PAR OU �MPAR --\n");
	
	if(par == 1)
	{
		printf("Jogador 1 - PAR\n");
		printf("Computador - �MPAR\n");	
	}
	else
	{
		printf("Jogador 1 - �MPAR\n");
		printf("Computador - PAR\n");
	}
	
	while(1)
	{
		printf("Jogador 1 - Escolha um n�mero de 0 a 5: ");
		scanf(" %d", &num1);
		
		if(num1 < 0 || num1 > 5)
		{
			printf("N�mero inv�lido. Insira um n�mero de 0 a 5.\n");
		}
		else
		{
			break;
		}
	}
	
	
	num2 = 1 + (rand () % 5);
	
	system("cls");
	
	soma = num1 + num2;
	
	printf("-- JOGO PAR OU �MPAR --\n");
	printf("Jogador 1: %d, %s\n", num1, par == 1?"PAR":"�MPAR");
	printf("Computador: %d, %s\n", num2, par == 2?"PAR":"�MPAR");
	
	
	
	if(soma % 2 == 0)
	{
		
		if(par == 1)
		{
			printf("Ganhador: JOGADOR 1\n");
		}
		else
		{
			printf("Ganhador: COMPUTADOR\n");
		}
	}
	else
	{
		if(par == 2)
		{
			printf("Ganhador: JOGADOR 1\n");
		}
		else
		{
			printf("Ganhador: COMPUTADOR\n");
		}
	}
	
	return 0;
}
