#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	//05) Crie um vetor de 4 posições. Preencha aleatoriamente somente com 0 e 1. Imprima o vetor na tela.
	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int bin[4];
	int dec = 0;
	
	srand(time(NULL));

	printf("O vetor gerado foi: \n");
	for(i = 0; i < 4; i++)
	{
		bin[i] = rand()%2;
		printf("[%d]", bin[i]);
	}
	
}
