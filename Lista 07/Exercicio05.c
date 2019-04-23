#include<stdio.h>
#include<locale.h>
#include<string.h>

//5) Criação de texto aleatório. Gere um número aleatório entre 10 e 20 para linhas do texto. 
//Para cada linha gere um número aleatório entre 5 a 20 para palavras. 
//Para cada palavra gere um número aleatório entre 1 e 15 para letras. 
//Essas letras deve ser aleatórias (tabela ASCII). Grave o texto em um arquivo.

int main(){

	int n, i, j, k;
	
	int linhas, palavras, letras;
	
	srand(time(NULL));
	
	FILE *pont_arq; 
    
    pont_arq = fopen("exercicio05.txt", "w");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
	n = 65 + rand() % (90-65);
	
	linhas = 10 + rand() % (20-10);
	
	for(i = 0; i < linhas; i++)
	{
		palavras = 5 + rand() % (20-5);
		
		for(j = 0; j < palavras; j++)
		{
			letras = 1 + rand() % (15-1);
			
			for(k = 0; k < letras; k++)
			{
				n = 65 + rand() % (90-65);
				
				fprintf(pont_arq, "%c", n);
			}

			fprintf(pont_arq, " ");
		}

		fprintf(pont_arq, "\n");
	}
	
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");


}
