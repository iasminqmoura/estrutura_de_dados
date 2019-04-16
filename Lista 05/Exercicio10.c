#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//10) Preencher um vetor com os números 10 a 20, e depois mostrar os elementos pares do vetor de trás pra frente. E também mostrar os números ímpares.
int main() 
{	

	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int i;
	
	printf("Vetor inicial: \n");
	for(i = 10; i <=20; i++)
	{
			vetor[i-10] = i;
			printf("%d ", vetor[i-10]);
	}
	
	printf("\n\n");
	
	printf("Números pares decrescentes: \n");
	for(i = 20; i >= 10; i--)
	{
		if(vetor[i-10] % 2 == 0)
		{
			printf("%d ", vetor[i-10]);
		}

	}
	
	printf("\n\n");
	
	printf("Números ímpares: \n");
	for(i = 20; i >= 10; i--)
	{
		if(vetor[i-10] % 2 == 1)
		{
			printf("%d ", vetor[i-10]);
		}
	}
	
	
}
