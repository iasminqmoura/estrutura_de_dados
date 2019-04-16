#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//03) Fa�a um jogo onde o usu�rio escolhe um naipe de uma carta (1 - ouros, 2 - copas, 3 - paus, 4 - espadas). 
	//Escolhe um valor (1 - �s, 2 - dois, 3 - tr�s, �, 11 - valete, 12 - rainha/dama, 13 - rei). 
	//Exibir na tela uma mensagem com a descri��o da carta escolhida. Ex.: �Voc� escolheu a carta dois de ouros�. 
	
	
	int carta, valor;
	
	while(1)
	{
		printf("Escolha um n�mero:\n1 - �s     |2 - dois        |3 - tr�s|4 - quatro|5 - cinco|\n6 - seis   |7 - sete        |8 - oito|9 - nove  |10 - dez |\n11 - valete|12 - rainha/dama|13 - rei|\n");
		scanf("%d", &valor);
		
		if(valor < 1 || valor > 13)
		{
			printf("N�mero inv�lido, insira um n�mero entre 1 e 13.\n\n");
		}
		else
		{
			break;
		}
	}
	
		while(1)
	{
		printf("Escolha um naipe:\n1 - ouros|2 - copas|3 - paus|4 - espadas\n");
		scanf("%d", &carta);
		
		if(carta < 1 || carta > 4)
		{
			printf("N�mero inv�lido, insira um n�mero entre 1 e 4.\n\n");
		}
		else
		{
			break;
		}
	}

	printf("\nVoc� escolheu a carta ");
	
	switch(valor)
	{	
		case 1:
			printf("�s");
		break;
		
		case 2:
			printf("dois");
		break;
		
		case 3:
			printf("tr�s");
		break;
		
		case 4:
			printf("quatro");
		break;
		
		case 5:
			printf("cinco");
		break;
		
		case 6:
			printf("seis");
		break;
		
		case 7:
			printf("sete");
		break;
		
		case 8:
			printf("oito");
		break;
		
		case 9:
			printf("nove");
		break;
		
		case 10:
			printf("dez");
		break;
		
		case 11:
			printf("valete");
		break;
		
		case 12:
			printf("dama/rainha");
		break;
		
		case 13:
			printf("rei");
		break;
		
	}
	
	printf(" de ");
	
	switch(carta)
	{
		case 1:
			printf("Ouros");
		break;
		
		case 2:
			printf("Copas");
		break;
		
		case 3:
			printf("Paus");
		break;
		
		case 4:
			printf("Espadas");
		break;

	}
	return 0;
}
