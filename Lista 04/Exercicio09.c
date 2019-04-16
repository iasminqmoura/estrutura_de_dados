#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 09) Faça um jogo onde o computador gera operações matemáticas aleatórias, e o jogador tem que acertar o resultado. 
// Pode ser só adição, ou pode adicionar mais operações se você conseguir. Os termos da operação são aleatórios. 
// Pode fazer com dois termos, ou com mais termos, se você conseguir. Crie um critério para o jogo terminar 
// (errar uma vez, errar três vezes, etc., você escolhe o critério de parada). Faça um visual interessante, coloque título, textos informativos, 
// nome do desenvolvedor, etc. Faça um placar com a pontuação do jogador.

void iniciarJogo();
void novoDesafio();
int tentar();
int jogarNovamente();
int random(int min, int max);

int num1, num2, resultado;
int tentativas;
int pontos;

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	do 
	{
		iniciarJogo();
		
		while(tentativas > 0) 
		{
			novoDesafio();
			
			printf("Responda corretamente:\n");
			printf("Qual o resultado da soma de %d e %d?\n", num1, num2);
			
			if(tentar() == resultado) 
			{
				printf("Parabéns! Você acertou!\n");
				pontos++;
			}
			else 
			{
				printf("Que pena, você errou!\n");
				printf("A resposta correta era %d.\n", resultado);
				tentativas--;
			}
			system("pause");
		}
		
		printf("\nFim de jogo.\nVocê fez %d pontos.\n", pontos);
	}
	while(jogarNovamente());
	return 0;
}

void iniciarJogo() 
{
	tentativas = 3;
	pontos = 0;
}

void novoDesafio() {
	system("cls");
	num1 = random(1, 100);
	num2 = random(1, 100);
	resultado = num1 + num2;
}

int tentar() {
	int num;
	printf("Insira o resultado: ");
	scanf("%d", &num);
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
