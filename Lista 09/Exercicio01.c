#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//1) Procure no Google um arquivo txt com a lista de estados do Brasil. Salve esse arquivo. Faça um código que leia esse arquivo e imprima na tela linha por linha.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	char str[256];
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("estados.txt", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	
	while(fscanf(pont_arq, " %[^\n]s", str) != EOF)
	{
		printf("%s\n", str);
	}
	
	fclose(pont_arq);
    
	
}
