#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//04) Faça um código que imprima os números de 0 a 99, porém apenas dez números por linha.
	
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


