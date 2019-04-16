#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//02) Faça um jogo de pedra-papel-tesoura. Receba o nome de cada jogador. Cada jogador escolhe pedra, ou papel, ou tesoura.
	//Condições de vitória: pedra vence tesoura; tesoura vence papel; papel vence pedra. Exiba todas as informações do jogo na tela.



	char jogador1[100], jogador2[100];
	int jogada1, jogada2;
		
	printf("-- JOGO PEDRA, PAPEL OU TESOURA --\n");
	
	printf("Insira o nome do jogador 1: ");
	scanf(" %[^\n]s", &jogador1);
	
	printf("Insira o nome do jogador 2: ");
	scanf(" %[^\n]s", &jogador2);
	
	while(1)
	{
		printf("JOGADOR 1 \n\n");
		printf("Digite 1 para PEDRA\n");
		printf("Digite 2 para PAPEL\n");
		printf("Digite 3 para TESOURA\n");
		
		scanf(" %d", &jogada1);
		
		if(jogada1 < 1 || jogada1 > 3)
		{
			printf("Número inválido. Insira 1, 2 ou 3.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	while(1)
	{
		printf("JOGADOR 2 \n\n");
		printf("Digite 1 para PEDRA\n");
		printf("Digite 2 para PAPEL\n");
		printf("Digite 3 para TESOURA\n");
		
		scanf(" %d", &jogada2);
		
		if(jogada2 < 1 || jogada2 > 3)
		{
			printf("Número inválido. Insira 1, 2 ou 3.\n");
		}
		else
		{
			break;
		}
	}
	
	system("cls");
	
	//----------------------------------------------------------
	if(jogada1 == 1 && jogada2 == 1)
	{
		printf("EMPATE - Pedra x Pedra\n");
		
	}
	//----------------------------------------------------------
	
	//----------------------------------------------------------
	if(jogada1 == 2 && jogada2 == 1)
	{
		printf("VITÓRIA JOGADOR 1 (%s) - Papel x Pedra\n", jogador1);
	}
	if(jogada1 == 1 && jogada2 == 2)
	{
		printf("VITÓRIA JOGADOR 2 (%s) - Pedra x Papel\n", jogador2);
	}
	//----------------------------------------------------------
	
	//----------------------------------------------------------
	if(jogada1 == 1 && jogada2 == 3)
	{
		printf("VITÓRIA JOGADOR 1 (%s) - Pedra x Tesoura\n", jogador1);
	}
	if(jogada1 == 1 && jogada2 == 3)
	{
		printf("VITÓRIA JOGADOR 1 (%s) - Pedra x Tesoura\n", jogador2);
	}
	//----------------------------------------------------------
	
	//----------------------------------------------------------
	if(jogada1 == 2 && jogada2 == 2)
	{
		printf("EMPATE - Papel x Papel\n");
	}
	//----------------------------------------------------------
	
	//----------------------------------------------------------
	if(jogada1 == 3 && jogada2 == 2)
	{
		printf("VITÓRIA JOGADOR 1 (%s) - Tesoura x Papel\n", jogador1);
	}
	if(jogada1 == 2 && jogada2 == 3)
	{
		printf("VITÓRIA JOGADOR 2 (%s) - Papel x Tesoura\n", jogador2);
	}
	//----------------------------------------------------------
	
	//----------------------------------------------------------
	if(jogada1 == 3 && jogada2 == 3)
	{
		printf("EMPATE - Tesoura x Tesoura\n");
	}
	//----------------------------------------------------------
	
	return 0;
}
