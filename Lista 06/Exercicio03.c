#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//03) Dado dois vetores aleat�rios, A (5 elementos) e B (8 elementos), fa�a um programa em C que imprima todos os elementos comuns aos dois vetores.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[5];
	int vetorB[8];
	int i, j;
	int cont = 0;
	
	printf("VETOR A - Informe 5 números: \n");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &vetorA[i]);
	}
	
	printf("VETOR B - Informe 8 números: \n");
	
	for(j = 0; j < 8; j++)
	{
		scanf("%d", &vetorB[j]);
	}
	
	printf("Valores em comum nos vetores A e B: \n");
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if(vetorA[i] == vetorB[j])
			{
				printf("%d ", vetorB[j]);
				cont++;
				break;
			}
			
		}
	}
	
	if(cont == 0)
	{
		printf("Não existem valores em comum.");
	}
	
	
}
