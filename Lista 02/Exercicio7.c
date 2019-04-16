#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//07) Escreva um código que leia 15 valores reais, encontre e imprima o maior e o menor deles.
	
	int nums[15];
	int num;
	int i;
	
	for(i = 0; i < 15; i++)
	{
		printf("Insira um valor real: ");
		scanf("%d", &num);
		nums[i] = num;
	}
	
	int numMaior = 0;
	int numMenor = 999999;
	int idMaior = -1;
	int idMenor = -1;
	
	for(i = 0; i < 15; i++)
	{
		if(nums[i] > numMaior)
		{
			numMaior = nums[i];
			idMaior = i;
		}
		
		if(nums[i] < numMenor)
		{
			numMenor = nums[i];
			idMenor = i;
		}
	}
	
	printf("O número maior inserido é %d e o menor é %d", nums[idMaior], nums[idMenor]);
	
	return 0;
}


