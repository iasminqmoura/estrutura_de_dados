#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//08) Crie um jogo que mostre um n�mero bin�rio para o usu�rio, e este tem que acertar o n�mero decimal correspondente. 
//Similar ao exerc�cio 9 da lista 4. Este n�mero bin�rio tem que estar em um vetor de 4 posi��es. O jogo deve continuar e mostrar quantas vezes o jogador acertou e errou.
void iniciarJogo();
int tentativa();
int jogarNovamente();

int main() 
{	

	setlocale(LC_ALL, "Portuguese");
	int i, j;
	int binario[4];
	int decimalSistema = 0;
	int contAcertos, contErros;
	
	srand(time(NULL));
	
	do 
	{
		iniciarJogo();
		
		printf("Insira o valor decimal correspondente ao valor bin�rio dado:\n");	
		printf("Bin�rio: ");
			
		for(i = 0; i < 4; i++)
		{
			binario[i] = rand()%2;
		}
		
		//Imprimir o n�mero bin�rio na ordem certa
		for(i = 3; i >= 0; i--)
		{
			printf("%d", binario[i]);
		}
		
		//Fazer a convers�o pra decimal 
		for(i = 0; i < 4; i++)
		{
			decimalSistema = decimalSistema + (pow(2, i) * binario[i]);
		}
			
			int tentar = tentativa();
			
			if(tentar == decimalSistema)
			{
				printf("Parab�ns, voc� acertou!\n");
				contAcertos++;
			}
			else
			{
				printf("Que pena, voc� errou.\n");
				contErros++;
			}
			
			printf("\nQuantidade de acertos: %d", contAcertos);
			printf("\nQuantidade de erros: %d", contErros);
			
	}while(jogarNovamente());
	

}

void iniciarJogo()
{
	system("cls");
}
int tentativa()
{
	int decimalUsuario;
	
	while(1)
	{
	printf("\n");
	printf("Decimal: ");
	scanf("%d", &decimalUsuario);
	
		if(decimalUsuario > 15)
		{
			printf("N�mero inv�lido");
		}
		else
		{
			break;
		}
	}
	return decimalUsuario;
}

int jogarNovamente()
{
	int i;
	printf("\n\nDeseja jogar novamente? Use 0 para N�O ou qualquer outra tecla para SIM.\n");
	scanf("%d",&i);
	return i;
}
