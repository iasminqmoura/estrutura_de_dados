//05) Faça uma função que receba o horário atual,
// e imprima na tela uma mensagem de boas-vindas de acordo com o horário. 
//Entre 6h da manhã e meio dia, bom dia; Entre meio dia e 18h, boa tarde; Entre 18h e meia noite, boa noite.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int horario(int hora, int min, int sec);
int main() 
{	
	setlocale(LC_ALL, "Portuguese");
	
	struct tm*local;
	time_t t;
	t = time(NULL);
	local = localtime(&t);
	
	int hora = local->tm_hour;
	int min  = local->tm_min;
	int sec  = local->tm_sec;
	
	printf("Hora atual ....... %02d:%02d:%02d\n", hora, min, sec);
		
	horario(hora, min, sec);

} 

int horario(int hora, int min, int sec){
	
	
	if(hora > 6 && hora <= 12)
	{
		printf("Bom dia!");
	}
	
	if(hora > 12 && hora <= 18)
	{
		printf("Boa tarde!");
	}
	
	if(hora > 18 && hora < 24)
	{
		printf("Boa noite!");
	}
	
	if(hora > 0 && hora < 6);
	{
		printf("Boa noite pra quem acha que o dia só começa quando amanhece.\nBom dia pra quem gosta de termos técnicos.");
	}
}
