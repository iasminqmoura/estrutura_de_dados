#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() 
{
	
	//02) Fa�a um c�digo que gere um n�mero aleat�rio entre 1000 e 9999, e fa�a a decomposi��o do n�mero em unidade, dezena, centena e milhar. Ex.: 8531. Unidade: 1. Dezena: 30. Centena: 500. Milhar: 8000.
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));
	
	int i;
	int unidade, dezena, centena, milhar;
	
	i = 1000 + (rand () % 9000);
	
	unidade = i % 10;
	dezena = (i % 100 / 10) * 10;
	centena = (i % 1000 / 100) * 100;
	milhar = (i %10000 / 1000) * 1000;
	
	printf("%d = %d unidade, %d dezena, %d centena, %d milhar.", i, unidade, dezena, centena, milhar);
	

}
