#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//06) Fa�a um c�digo que gere 100 n�meros aleat�rios entre -100 e 100, e imprima esses n�meros, 
	//seguido das informa��es se ele � positivo ou negativo, se ele � par ou �mpar.
	
	// MIN + (rand() % (MAX - MIN) + 1)
	// -100 + (rand() % 201)
	
	int i, j;
	
	
	
		for(j = 0; j < 100; j++)
		{
			i = -100 + (rand () % 201);
			printf("%d = %s e %s\n", i,
					i < 0 ? "Negativo" : "Positivo",
					i % 2 == 0 ? "Par" : "�mpar");
	
			/*if(i < 0 && i % 2 == 0)
			{
				printf("%d = Negativo e Par\n", i);
			}
			
			if(i < 0 && i % 2 != 0)
			{
				printf("%d = Negativo e �mpar\n", i);
			}
			
			if(i > 0 && i % 2 == 0)
			{
				printf("%d = Positivo e Par\n", i);
			}
			
			if(i > 0 && i % 2 != 0)
			{
				printf("%d = Positivo e �mpar\n", i);
			}*/
		}
	

	return 0;
}

