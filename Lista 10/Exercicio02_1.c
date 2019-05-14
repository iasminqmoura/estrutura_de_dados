#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//2) Faça um programa que grave 25 números aleatórios (entre 10 e 99) em um arquivo do tipo texto.
	//Faça outro programa que leia este arquivo texto que foi gerado, e guarde esses 25 números em uma matriz 5x5, e a exiba na tela.
	
	int matriz[5][5];
	int i = 0, j = 0, num;
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("exercicio02.txt", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	while(fscanf(pont_arq, "%d", &num) != EOF)
	{
		matriz[i][j] = num;
		
		j++;
		if(j == 5)
		{
			i++;
			j = 0;
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
	fclose(pont_arq);
}

