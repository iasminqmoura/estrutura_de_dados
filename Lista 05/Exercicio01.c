#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{	
	//01) Preencher um vetor com números inteiros (oito elementos). Solicitar um número do teclado. Pesquisar se esse número existe no vetor. 
	//Se existir, imprimir em qual posição do vetor. Se não existir, imprimir uma mensagem que não existe.
	
	setlocale(LC_ALL, "Portuguese");
	
	int numVetor[8];
	int num, posicao;
	int i, j;
	
	printf("Insira 8 números: \n");
	
	//Insere valores no vetor
	for(i = 0; i < 8; i++)
	{
		scanf("%d", &numVetor[i]);
	}
	
	printf("Insira o número que deseja procurar no vetor: ");
	scanf("%d", &num);
	
	//Procura o número no vetor
	for(i = 0; i < 8; i++)
	{
	if(num == numVetor[i]) //Se o número for igual a algum número inserido no vetor, imprime mensagem
	{
		posicao = i;
		printf("Valor %d encontrado na posição %d", num, posicao);
		
	}
	else
	{
		j = j + 1; //Se não, utiliza o contador
	}
	
	if(j > 8)
	{
		printf("Valor não encontrado!"); //Se o valor do contador for maior que o do vetor,
										 // é impressa a mensagem, já que foi percorrido todo o vetor e nenhum valor foi encontrado.
	}
	}

} 

