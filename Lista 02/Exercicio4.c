#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//04) Fa�a um c�digo que imprima os n�meros de 0 a 99, por�m apenas dez n�meros por linha.
	
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf(" %02d", i*10 + j);
		}
		printf("\n");
	}

	return 0;
}


