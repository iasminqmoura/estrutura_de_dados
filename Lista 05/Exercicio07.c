#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//07) Pegue o vetor do exerc�cio 5, e considere que ele � um n�mero bin�rio. Fa�a a convers�o deste n�mero bin�rio para decimal.
int main() 
{	

	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int bin[4];
	int dec = 0;
	
	srand(time(NULL));
	
	printf("Bin�rio: ");

	for(i = 0; i < 4; i++)
	{
		bin[i] = rand()%2;
		//printf("%d", bin[i]);
	}
	
	//Imprimir o n�mero bin�rio ao contr�rio
	for(i = 3; i >= 0; i--)
	{
		printf("%d", bin[i]);
	}
	
	for(i = 0; i < 4; i++)
	{
		dec = dec + (pow(2, i) * bin[i]);
	}
	
	printf("\nDecimal: %d\n", dec);
}
