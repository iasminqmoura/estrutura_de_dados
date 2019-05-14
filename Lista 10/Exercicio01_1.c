#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	//1) Faça um programa que grave 10 números aleatórios (entre 0 e 20) em um arquivo do tipo texto.
	//Faça outro programa que leia este arquivo texto que foi gerado, e calcule a média dos dez números que estão gravados nele.

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	int soma = 0, num, cont = 0;
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("exercicio01.txt", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	
	while(fscanf(pont_arq, "%d", &num) != EOF)
	{
		soma = num + soma;
		cont++;
		
		printf("%d ", num);
	}
	
	fclose(pont_arq);
	
	if(cont != 0)
	{
		float media = soma / (float)cont;
		printf("\n");
		printf("Media dos numeros lidos: %f\n", media);   	
	}
	else
	{
		printf("Não existe nenhum valor no arquivo.");
	}
	
}
