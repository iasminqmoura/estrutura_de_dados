#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

//06) Faça um menu de um jogo com quatro opções. [1] Jogar. [2] Carregar jogo. [3] Créditos. [4] Sair do jogo. Para cada opção que o jogador escolher, exiba uma mensagem na tela. 
//O jogo só termina se o jogador escolher a opção [4] Sair do jogo. Coloque o menu dentro de um while ou do-while. Use sua criatividade nas mensagens do jogo, assim como no exercício 4 da lista 2.
//********
//* JOGO *
//********
//[1] Jogar. 
//[2] Carregar jogo. 
//[3] Créditos. 
//[4] Sair do jogo.

int jogar = 0;

int print_menu() 
{
	system("cls");
	printf("-- NÃO É UM JOGO --\n");
	printf("..........................\n");
	printf("Nota de esclarecimento:\n  Se você está pensando que isto é um jogo, está enganado.\n\n");
	printf("1- Jogar\n");
	printf("2- Carregar jogo\n");
	printf("3- Créditos\n");
	printf("4- Sair do jogo");
	return 1;
}

int processar_menu(int op) 
{
	system("cls");
	printf("-- NÃO É UM JOGO --\n");
	printf("..........................\n\n");
	
	switch(op) 
	{
		case 1:
			jogar_menu();
		break;
			
		case 2:
			printf("Isso não é um jogo. Não há o que carregar.\n\n");
		break;
			
		case 3:
			printf("Créditos:\n");
			printf("  Desenvolvedora: Iasmin Quirino Moura\n");
			printf("  Programadora:   Iasmin Quirino Moura\n");
			printf("  Artista:        Iasmin Quirino Moura\n");
			printf("  Direção:        Iasmin Quirino Moura\n");
			printf("  História:       Iasmin Quirino Moura\n");
			printf("  Sons por:       Iasmin Quirino Moura\n");
			printf("  Agradecimentos: Iasmin Quirino Moura\n");
			printf("                  Iasmin Quirino Moura\n");
			printf("                  Iasmin Quirino Moura\n");
			break;
			
		case 4:
		return;
			
		default:
		break;
	}
	
	printf("\n");
	system("pause");
	return 1;
}

int jogar_menu() 
{
	int n, n2;
	switch(jogar) 
	{
		case 0:
			printf("Isso não é um jogo. Não há o que jogar.\n");
		break;
		
		case 1:
			printf("É sério, não há nada pra fazer aqui!\n");
		break;
		
		case 2:
			printf("Por que insiste tanto?\n");
		break;
		
		case 3:
			printf("DESISTA!!! NÃO HÁ NADA AQUI!\n");
		break;
		
		case 4:
			printf("Então é assim? Não vai parar?\n");
		break;
		
		case 5:
			printf("Vamos ver por quanto tempo aguenta!\n");
		break;
		
		case 6: case 7: case 8: case 9: case 10:
		case 11: case 12: case 13: case 14: case 15:
		case 16: case 17: case 18: case 19: case 20:
			printf("%d/15.\n", jogar - 5);
		break;
		
		case 21:
			printf("Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaah!\nCansei.\n");
		break;
		
		case 22:
			printf("Vamos jogar então.\n");
		break;
		
		case 27:
			printf("NOVAMENTE NOVAMENTE NOVAMENTEEEEEEE!\n\n");
		case 26:
			printf("NOVAMENTE NOVAMENTE NOVAMENTE!\n\n");
		case 25:
			printf("NOVAMENTE NOVAMENTE!\n\n");
		case 24:
			printf("Vamos tentar novamente.\n\n");
		case 23:
			printf("Insira o numero que estou pensando: ");
			scanf(" %d", &n);
			n2 = rand();
			
			if(n == n2) 
			{
				n2++;
			}
			
			printf("Que pena! Você errou! O numero que eu estava pensando era %d!\n", n2);
		break;
		
		case 28:
			printf("Cansei. Agora acabou mesmo. Já pode sair.\n");
		break;
			
		case 29:
			printf("Voce não desiste né?\n");
		break;
		
		default:
			printf(":)\n");
		break;
	}
	
	jogar++;
	return 1;
}

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int op = 0;
	do 
	{
		print_menu();
		
		printf("\nInsira uma opção: ");
		scanf(" %d", &op);
	
		processar_menu(op);
	}
	while(op != 4);
	
	return 0;
}

