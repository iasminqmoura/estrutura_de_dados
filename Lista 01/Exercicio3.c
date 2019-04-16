#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	//Faça um programa que imprima o nome de duas equipes e receba a quantidade de vitórias, empates e derrotas de cada equipe. 
	//Cada vitória valem 3 pontos, cada empate vale 1 ponto, derrota não vale ponto. Imprimir o nome de cada equipe (a sua escolha),
	//o número de vitórias, empates e derrotas, e a pontuação total.
	
	setlocale(LC_ALL, "Portuguese");
	
	char equipe1[20], equipe2[20];
	int vitoria_eqp1, empate_eqp1, derrota_eqp1;
	int vitoria_eqp2, empate_eqp2, derrota_eqp2;
	int pontos_eqp1, pontos_eqp2;
	
	printf("Insira o nome da equipe 1: ");
	scanf(" %[^\n]s", &equipe1);
	printf("Insira o nome da equipe 2: ");
	scanf(" %[^\n]s", &equipe2);
	
	printf("Insira o número de vitórias da equipe 1: ");
	scanf("%d", &vitoria_eqp1);
	printf("Insira o número de vitórias da equipe 2: ");
	scanf("%d", &vitoria_eqp2);
	
	printf("Insira o número de empates da equipe 1: ");
	scanf("%d", &empate_eqp1);
	printf("Insira o número de empates da equipe 2: ");
	scanf("%d", &empate_eqp2);
	
	printf("Insira o número de derrotas da equipe 1: ");
	scanf("%d", &derrota_eqp1);
	printf("Insira o número de derrotas da equipe 2: ");
	scanf("%d", &derrota_eqp2);
	
	pontos_eqp1 = (vitoria_eqp1 * 3) + (empate_eqp1 * 1) + (derrota_eqp1 * 0);
	pontos_eqp2 = (vitoria_eqp2 * 3) + (empate_eqp2 * 1) + (derrota_eqp2 * 0);
	
	printf("\n");
	printf("A equipe %s obteve %d vitórias, %d empates e %d derrotas. PONTUAÇÃO FINAL: %d pontos.\n", equipe1, vitoria_eqp1, empate_eqp1, derrota_eqp1, pontos_eqp1);
	printf("A equipe %s obteve %d vitórias, %d empates e %d derrotas. PONTUAÇÃO FINAL: %d pontos.", equipe2, vitoria_eqp2, empate_eqp2, derrota_eqp2, pontos_eqp2);
	return 0;
}
