#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 07) Gere uma matriz 4x4 com números aleatórios entre 0 e 9. Crie um algoritmo para calcular a quantidade de vezes que cada número (entre 0 e 9)
// aparece na matriz. Coloque essas quantidades em um vetor. No índice 0, a quantidade de 0’s que apareceu na matriz. 
// No índice 1, a quantidade de 1’s que apareceram na matriz, e assim sucessivamente.

#define SIZE 4
int mat[SIZE][SIZE];

int main() 
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	int i, j;
	int vetor[10];
	
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			mat[i][j] = rand() % 10;
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 10; i++) 
	{
		vetor[i] = 0;
	}
	
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j < SIZE; j++)
		{
			vetor[mat[i][j]]++;
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		printf("O número %d apareceu %d vezes\n", i, vetor[i]);
	}
	return 0;
}
