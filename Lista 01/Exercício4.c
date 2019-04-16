#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	//Faça um programa que receba a quantidade de vitórias, recebe a quantidade de derrotas, recebe a quantidade de empates.
	//Exibe na tela o nome da equipe (a sua escolha),a quantidade de vitórias, derrotas e empates, e os respectivos percentuais. 
	//Ex.: 8 vitórias - 53%, 5 derrotas - 33%, 2 empates - 13%
	
	setlocale(LC_ALL, "Portuguese");
	
	char equipe[20];
	float vitoria, empate, derrota;
	float porc_vitoria, porc_empate, porc_derrota;
	
	
	printf("Insira o nome da equipe: ");
	scanf(" %[^\n]s", &equipe);
	
	printf("Insira o número de vitórias: ");
	scanf("%f", &vitoria);
	
	printf("Insira o número de empates: ");
	scanf("%f", &empate);
	
	printf("Insira o número de derrotas: ");
	scanf("%f", &derrota);
	
	porc_vitoria = (vitoria / (vitoria + empate + derrota)) * 100;
	porc_empate = (empate / (vitoria + empate + derrota)) * 100;
	porc_derrota = (derrota / (vitoria + empate + derrota)) * 100;
	
	printf("\n");
	
	printf("A equipe %s obteve: \n", equipe);
	printf("%.0f vitórias - %.2f %%\n", vitoria, porc_vitoria);
	printf("%.0f empates - %.2f %%\n", empate, porc_empate);
	printf("%.0f derrotas - %.2f %%\n", derrota, porc_derrota);
	
	return 0;
}
