#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	//08) Fa�a um c�digo em C para exibir as tabuadas (multiplica��o) de 0 a 9.
	
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%d x %d = %d\n", i,j,i*j);
		}
	}

	return 0;
}


