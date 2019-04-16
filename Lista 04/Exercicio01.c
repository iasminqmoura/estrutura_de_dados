#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// 01)Faça uma função que simule um dado de 6 faces. Tente descobrir se este dado é viciado ou honesto. 
// Jogue o dado mil vezes. Calcule a porcentagem de vezes que cada número (face do dado) saiu. 
// Não precisa exibir os mil números. Exiba apenas a porcentagem de vezes que cada número saiu.

int rolarDado();

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int dados[6] = {0, 0, 0, 0, 0, 0};
	int i;
	for(i = 0; i < 1000; i++)
	{
		int dado = rolarDado();
		dados[dado]++;
	}
	
	float min = 100;
	float max = 0;
	for(i = 0; i < 6; i++) 
	{
		// Porcentagem = (quantidade / vezes) * 100 
		//			   = (q / 1000) * 100 
		//			   = q / 10
		float porcentagem = dados[i] / 10.0;
		printf("O dado caiu em %d %.2f%% das vezes.\n", i + 1, porcentagem);
		
		if(porcentagem < min)
		{
			min = porcentagem;
		}
		if(porcentagem > max)
		{
			max = porcentagem;
		}
	}
	
	if(max - min > 10) 
	{
		printf("\nO dado é viciado.\n");
	}
	else
	{
		printf("\nO dado não é viciado.\n");
	}
	return 0;
}

int rolarDado()
 {
	return rand() % 6;
}

