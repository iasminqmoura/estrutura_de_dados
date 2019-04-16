#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//05) Faça um código que imprima 100 números aleatórios entre 0 a 99, porém apenas dez números por linha.
	
	// MIN + (rand() % (MAX - MIN) + 1)
	
	int i, j, k;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			k = 0 + (rand () % 99);
			printf(" %02d", k);
		}
		printf("\n");
	}
		
	return 0;
}
