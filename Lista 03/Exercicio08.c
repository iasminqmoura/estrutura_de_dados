#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//08) Melhore o jogo do pedra-papel-tesoura, porém agora será single player. Humano vs computador. 
	//O computador gera um número aleatório entre 0 e 2 (0 para pedra, 1 para papel, 2 para tesoura). 
	//O jogador escolhe uma das opções. Exiba todas as informações para verificar quem venceu.
	
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
				printf("Número inválido. Insira 0, 1 ou 2.\n");
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
			printf("VITÓRIA JOGADOR 1 - Papel x Pedra\n");
		}
		if(jogada1 == 0 && jogada2 == 1)
		{
			printf("VITÓRIA COMPUTADOR - Pedra x Papel\n");
		}
		//----------------------------------------------------------
		
		//----------------------------------------------------------
		if(jogada1 == 0 && jogada2 == 2)
		{
			printf("VITÓRIA JOGADOR 1 - Pedra x Tesoura\n");
		}
		if(jogada1 == 0 && jogada2 == 2)
		{
			printf("VITÓRIA COMPUTADOR - Pedra x Tesoura\n");
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
			printf("VITÓRIA JOGADOR 1 - Tesoura x Papel\n");
		}
		if(jogada1 == 1 && jogada2 == 2)
		{
			printf("VITÓRIA COMPUTADOR - Papel x Tesoura\n");
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
