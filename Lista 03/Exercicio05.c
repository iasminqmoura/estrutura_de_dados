#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//05) Fa�a um c�digo que imprima 100 n�meros aleat�rios entre 0 a 99, por�m apenas dez n�meros por linha.
	
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
