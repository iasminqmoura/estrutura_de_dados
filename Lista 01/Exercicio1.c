#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	// Fazer um programa que receba um número inteiro, e verifique se ele está entre 100 e 200. 
	//Se estiver dentro desta faixa, imprima “Você digitou um número entre 100 e 200”, senão imprima 
	//“Você digitou um número fora da faixa”.
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Insira um número inteiro: ");
	scanf("%d", &numero);
	
	if(numero > 100 && numero < 200)
	{
		printf("Você digitou um número entre 100 e 200.");
	}
	else
	{
		printf("Você digitou um número fora da faixa");
	}
	
	
	return 0;
}
