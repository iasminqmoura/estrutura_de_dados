#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	

	//02) Preencher um vetor com os números pares do número 2 ao 20. Imprimir na tela o vetor.

	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10];
	int i;
	
	for(i = 0; i <=20; i++)
	{
		if(i % 2 == 0)
		{
			vetor[i] = i;
			printf("%d \n", vetor[i]);
		}
	}

} 
