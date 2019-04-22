#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	/*01) Fa�a um c�digo que grave em um arquivo 100 n�meros aleat�rios entre -100 e 100.
	
          Permiss�es para arquivos: 
          r: Permiss�o de abertura somente para leitura. � necess�rio que o arquivo j� exista.
          w: Permiss�o de abertura para escrita (grava��o). Cria o arquivo caso ele n�o exista
             e caso o mesmo exista ele RECRIA o arquivo novamente fazendo com que todos os dados
             existentes sejam perdidos. 
          a: Permiss�o para abrir um arquivo texto para escrita (grava��o), permite acrescentar
             novos dados ao final do arquivo.
	*/
	
	// MIN + (rand() % (MAX - MIN) + 1)
	// -100 + (rand() % 201)
	
	FILE *pont_arq; //cria vari�vel ponteiro para o arquivo 
	int i, j;
	
	//abrindo o arquivo com tipo de abertura W (sempre ser� gerado um novo arquivo com novos n�meros aleat�rios)
	pont_arq = fopen("exercicio01.txt", "w");
	
	//verificando se o arquivo foi realmente criado
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	
		for(j = 0; j < 100; j++)
		{
			i = -100 + (rand () % 201);
			//Usando o fprintf para gravar os dados no arquivo
			fprintf(pont_arq, "%d\n", i);
		}
	
	//Usando o fclose para fechar o arquivo.
	fclose(pont_arq);
	
	printf("Dados gravados com sucesso.");

	return 0;
}

