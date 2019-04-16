#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//04) Fa�a um programa que determina o m�ximo e o m�nimo de um vetor de N n�meros inteiros aleat�rios num vetor A de 50 elementos.

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
	
	printf("\nM�ximo: %d\n", maximo);
	printf("M�nimo: %d\n", minimo);
	
}
