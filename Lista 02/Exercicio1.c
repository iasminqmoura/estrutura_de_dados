#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//01) Faça um jogo multiplayer (multi-jogador) de par ou ímpar. Escolha o nome de cada jogador. Cada jogador escolhe par ou ímpar. Cada jogador entra com um número entre 0 e 5. 
	//Faça a soma entre os dois valores. Verifique se a soma é par ou ímpar. Exiba na tela todas as informações. Nome do jogo, nome dos jogadores, quem escolheu par e quem escolheu ímpar. 
	//Quais valores cada jogador entrou. Quem foi o vencedor da partida.

	char jogador1[100], jogador2[100];
	int par;
	int num1, num2;
	int soma;
	
	printf("-- JOGO PAR OU ÍMPAR --\n");
	
	printf("Insira o nome do jogador 1: ");
	scanf(" %[^\n]s", &jogador1);
	
	printf("Insira o nome do jogador 2: ");
	scanf(" %[^\n]s", &jogador2);
	
	while(1)
	{
		printf("Jogador 1 - digite 1 para par ou 2 para ímpar: ");
		scanf(" %d", &par);
		
		if(par < 1 || par > 2)
		{
			printf("Número inválido. Insira 1 ou 2.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	printf("-- JOGO PAR OU ÍMPAR --\n");
	
	if(par == 1)
	{
		printf("Jogador 1 - PAR\n");
		printf("Jogador 2 - ÍMPAR\n");	
	}
	else
	{
		printf("Jogador 1 - ÍMPAR\n");
		printf("Jogador 2 - PAR\n");
	}
	
	while(1)
	{
		printf("Jogador 1 - Escolha um número de 0 a 5: ");
		scanf(" %d", &num1);
		
		if(num1 < 0 || num1 > 5)
		{
			printf("Número inválido. Insira um número de 0 a 5.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	printf("-- JOGO PAR OU ÍMPAR --\n");
	
	if(par == 1)
	{
		printf("Jogador 1 - PAR\n");
		printf("Jogador 2 - ÍMPAR\n");	
	}
	else
	{
		printf("Jogador 1 - ÍMPAR\n");
		printf("Jogador 2 - PAR\n");
	}
	
	while(1)
	{
		printf("Jogador 2 - Escolha um número de 0 a 5: ");
		scanf(" %d", &num2);
		
		if(num2 < 0 || num2 > 5)
		{
			printf("Número inválido. Insira um número de 0 a 5.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	soma = num1 + num2;
	
	printf("-- JOGO PAR OU ÍMPAR --\n");
	printf("Jogador 1: %s, %d, %s\n", jogador1, num1, par == 1?"PAR":"ÍMPAR");
	printf("Jogador 2: %s, %d, %s\n", jogador2, num2, par == 2?"PAR":"ÍMPAR");
	
	
	
	if(soma % 2 == 0)
	{
		
		if(par == 1)
		{
			printf("Ganhador: JOGADOR 1\n");
		}
		else
		{
			printf("Ganhador: JOGADOR 2\n");
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
			printf("Ganhador: JOGADOR 2\n");
		}
	}
	
	return 0;
}
