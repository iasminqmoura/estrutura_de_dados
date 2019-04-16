#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	//Fazer um programa que receba três stats do jogador: vida, ataque e defesa. A experiência do jogador (XP) é a média entre 
	//os três stats. Imprima o nível do jogador conforme a seguir (0 a 25 XP) novato, (26 a 50 XP) mago, (51 a 75 XP) mago supremo, 
	//(76 a 100 XP)  lorde das magias.
	
	setlocale(LC_ALL, "Portuguese");
	
	float vida, ataque, defesa, media;
	
	do 
	{
		
		printf("Insira os status do jogador\n\n");
		
		printf("Vida: ");
		scanf("%f", &vida);
		
		printf("Ataque: ");
		scanf("%f", &ataque);
		
		printf("Defesa: ");
		scanf("%f", &defesa);
		
		printf("\n");
		
		media = (vida + ataque + defesa) /3;
		
		if(media <= 25)
		{
			printf("O jogador possui %.2f de XP, seu nível atual é de NOVATO", media);
		}
		
		if(media > 25 && media <=50)
		{
			printf("O jogador possui %.2f de XP, seu nível atual é de MAGO", media);
		}
		
		if(media > 50 && media <=75)
		{
			printf("O jogador possui %.2f de XP, seu nível atual é de MAGO SUPREMO", media);
		}
		
		if(media > 75 && media <=100)
		{
			printf("O jogador possui %.2f de XP, seu nível atual é de LORDE DAS MAGIAS", media);
		}
		
		if(media > 100)
		{
			printf("Insira valores de status com média até 100 pontos.\n\n");
			system("pause");
			system("cls");
		}	
		
	}
	
	while(media > 100);
	
	return 0;
}
