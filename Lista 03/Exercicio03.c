#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	srand(time(NULL));	
	
	//03) Fa�a um c�digo que gere um n�mero aleat�rio entre 1 e 9, e imprima a tabuada deste n�mero, um em cada linha
	
	int i, j;
	
	i = 1 + (rand () % 8);
	
		for(j = 0; j <= 10; j++)
		{
			printf("%d x %d = %d\n", i,j,i*j);
		}
	

	return 0;
}

