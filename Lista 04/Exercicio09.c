#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 09) Fa�a um jogo onde o computador gera opera��es matem�ticas aleat�rias, e o jogador tem que acertar o resultado. 
// Pode ser s� adi��o, ou pode adicionar mais opera��es se voc� conseguir. Os termos da opera��o s�o aleat�rios. 
// Pode fazer com dois termos, ou com mais termos, se voc� conseguir. Crie um crit�rio para o jogo terminar 
// (errar uma vez, errar tr�s vezes, etc., voc� escolhe o crit�rio de parada). Fa�a um visual interessante, coloque t�tulo, textos informativos, 
// nome do desenvolvedor, etc. Fa�a um placar com a pontua��o do jogador.

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
				printf("Parab�ns! Voc� acertou!\n");
				pontos++;
			}
			else 
			{
				printf("Que pena, voc� errou!\n");
				printf("A resposta correta era %d.\n", resultado);
				tentativas--;
			}
			system("pause");
		}
		
		printf("\nFim de jogo.\nVoc� fez %d pontos.\n", pontos);
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
	printf("Deseja jogar novamente?\nUse 1 para sim ou outra coisa para n�o.\n> ");
	scanf("%d", &i);
	return i == 1;
}

int random(int min, int max) 
{
	return min + (rand() % (max - min + 1));
}
