#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//04) Fa�a um c�digo que imprima 100 n�meros aleat�rios entre -100 e 100.
	
	
	// MIN + (rand() % (MAX - MIN) + 1)
	// -100 + (rand() % 201)
	
	int i, j;
	
	
	
		for(j = 0; j < 100; j++)
		{
			i = -100 + (rand () % 201);
			printf("%d\n", i);
		}
	

	return 0;
}

