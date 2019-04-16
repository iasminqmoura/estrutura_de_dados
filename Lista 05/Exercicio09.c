#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//09) Preencher um vetor com cinco números e guardar o cubo dos números em outro vetor. Mostrar os dois vetores.
int main() 
{	

	setlocale(LC_ALL, "Portuguese");
	
	int vetorInicial[5], vetorFinal[5];
 	int i;
 	
	printf("Insira os números do vetor inicial: \n");
 	for(i = 0; i < 5; i++)
	{
		scanf("%d", &vetorInicial[i]);
 	}
 	
 	printf("Vetor inicial: ");
 	for(i = 0; i < 5; i++)
 	{
 		printf ("[%d] ",vetorInicial[i]);
	}
 	
 	printf("\n");
 	
 	printf("Vetor final: ");
 	for(i = 0; i < 5; i++)
 	{
 		vetorFinal[i] = pow(vetorInicial[i], 3);
 		printf ("[%d] ",vetorFinal[i]);
	}
 	
}

