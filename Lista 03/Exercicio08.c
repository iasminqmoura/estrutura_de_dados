#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//08) Melhore o jogo do pedra-papel-tesoura, por�m agora ser� single player. Humano vs computador. 
	//O computador gera um n�mero aleat�rio entre 0 e 2 (0 para pedra, 1 para papel, 2 para tesoura). 
	//O jogador escolhe uma das op��es. Exiba todas as informa��es para verificar quem venceu.
	
	int jogada1, jogada2, op;
	
	while(1) 
	{
		
		printf("-- JOGO PEDRA, PAPEL OU TESOURA --\n");
		
		while(1)
		{
			printf("JOGADOR 1 \n\n");
			printf("Digite 0 para PEDRA\n");
			printf("Digite 1 para PAPEL\n");
			printf("Digite 2 para TESOURA\n");
			
			scanf(" %d", &jogada1);
			
			if(jogada1 < 0 || jogada1 > 2)
			{
				printf("N�mero inv�lido. Insira 0, 1 ou 2.\n");
			}
			else
			{
				break;
			}
		}
		
		system("cls");
		
		jogada2 = 0 + (rand () % 2);
		
		//----------------------------------------------------------
		if(jogada1 == 0 && jogada2 == 0)
		{
			printf("EMPATE - Pedra x Pedra\n");
			
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 1 && jogada2 == 0)
		{
			printf("VIT�RIA JOGADOR 1 - Papel x Pedra\n");
		}
		if(jogada1 == 0 && jogada2 == 1)
		{
			printf("VIT�RIA COMPUTADOR - Pedra x Papel\n");
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 0 && jogada2 == 2)
		{
			printf("VIT�RIA JOGADOR 1 - Pedra x Tesoura\n");
		}
		if(jogada1 == 0 && jogada2 == 2)
		{
			printf("VIT�RIA COMPUTADOR - Pedra x Tesoura\n");
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 1 && jogada2 == 1)
		{
			printf("EMPATE - Papel x Papel\n");
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 2 && jogada2 == 1)
		{
			printf("VIT�RIA JOGADOR 1 - Tesoura x Papel\n");
		}
		if(jogada1 == 1 && jogada2 == 2)
		{
			printf("VIT�RIA COMPUTADOR - Papel x Tesoura\n");
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 2 && jogada2 == 2)
		{
			printf("EMPATE - Tesoura x Tesoura\n");
		}
		//----------------------------------------------------------
		
		printf("Insira 1 para jogar novamente: ");
		scanf("%d", &op);
		
		if(op != 1)
		{
			break;
		}
		
		system("cls");
	}
	
	return 0;
}
