#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//05) Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. Faça um programa em C que calcule o produto escalar P de A por B.
// (Isto é, P = A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]). Imprima os três vetores (P, A, B).


int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i;
	int vetorA[5];
	int vetorB[5];
	int vetorP[5];
	int aux = 0;
	
	printf("Insira os valores do vetor A: \n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &vetorA[i]);
	}
	
	printf("Insira os valores do vetor B: \n");
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &vetorB[i]);
	}
	
	for(i = 0; i < 5; i++)
	{
		vetorP[i] = vetorA[i] * vetorB[i];
		aux += vetorP[i];
	}
	
	printf("VETOR A: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", vetorA[i]);
	}
	
	printf("\n");
	printf("VETOR B: ");
	for(i = 0; i < 5; i++)
	{
		printf("%d ", vetorB[i]);
	}
	
	printf("\nVETOR P - Produto escalar entre A e B: %d", aux);
}
