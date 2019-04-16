#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//04) Faça um programa que determina o máximo e o mínimo de um vetor de N números inteiros aleatórios num vetor A de 50 elementos.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int i;
	int vetorA[50];
	int maximo, minimo;
	
	srand(time(NULL));
	

	for(i = 0; i < 5; i++)
	{
		vetorA[i] = rand()%1000;
		printf("%d ", vetorA[i]);
	}
	
	maximo = vetorA[0];
	minimo = vetorA[0];
	
	for(i = 0; i < 5; i++)
	{
		if(vetorA[i] > maximo)
		{
			maximo = vetorA[i];
		}
		
		if(vetorA[i] < minimo)
		{
			minimo = vetorA[i];
		}
	}
	
	printf("\nMáximo: %d\n", maximo);
	printf("Mínimo: %d\n", minimo);
	
}
