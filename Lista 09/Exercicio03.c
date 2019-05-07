#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
3) Pegue uma imagem qualquer (m�ximo 400px de altura, e 400px de largura). 
Abra a imagem no GIMP. Siga os passos: Menu Arquivo, op��o Exportar, escolha o formato PPM (ASCII). 
A sua imagem ser� exportada para um arquivo com extens�o .ppm (no formato ASCII). 
Crie um c�digo para ler este arquivo .ppm criado, e exiba na tela as 5 primeiras linhas do conte�do.
*/

int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	char str[256];
	int cont;
		
	FILE *pont_arq; 
    
    pont_arq = fopen("poro.ppm", "r");
    
    if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}

	cont = 0;
	while(fscanf(pont_arq, " %[^\n]s", str) != EOF && cont++ < 5)
	{
		printf("%s\n", str);
	}
	
	fclose(pont_arq);
    
	
}
